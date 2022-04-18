#include "../Header Files/Collision.h"

int main() {

  sf::ContextSettings settings;
  settings.antialiasingLevel = 16;

  int modeHeight = 800;
  int modeWidth = 600;
  sf::RenderWindow window(sf::VideoMode(modeWidth, modeHeight), "My first game", sf::Style::Default, settings);
  window.setFramerateLimit(144);

  sf::Clock clock;
  sf::Time time;

  sf::CircleShape ball(10.f);
  ball.setPosition(290, 660);
  ball.setFillColor(sf::Color::White);

  sf::SoundBuffer ball_hit_buffer;
  if (!ball_hit_buffer.loadFromFile("../Sounds/ball_hit.wav")) {
    return -1;
  }

  sf::Sound ball_hit_sound;
  ball_hit_sound.setBuffer(ball_hit_buffer);

  sf::Music background_music;
  if(!background_music.openFromFile("../Music/background_music.wav")) {
    return -2;
  }
  background_music.setLoop(true);
  background_music.setVolume(40);
  background_music.play();

  sf::Font font;
  if (!font.loadFromFile("../Fonts/Times New Roman.ttf")) {
    return -10;
  }

  sf::Text game_over_text;
  game_over_text.setFont(font);
  game_over_text.setCharacterSize(48);
  game_over_text.setString("GAME OVER");
  game_over_text.setFillColor(sf::Color::Red);
  game_over_text.setPosition(180, 350);

  sf::Text time_survived;
  std::string survived;
  survived = "You survived ";
  time_survived.setFont(font);
  time_survived.setCharacterSize(32);
  time_survived.setFillColor(sf::Color::White);
  time_survived.setPosition(110, 450);

  sf::Image icon;
  if (!icon.loadFromFile("../images/Game_picture.ico")) {
    return 1;
  }
  window.setIcon(128, 128, icon.getPixelsPtr());

  sf::Image backside;
  if (!backside.loadFromFile("../images/backsidepng.png")) {
    return -1;
  }

  sf::Image ball_image;
  if (!ball_image.loadFromFile("../images/ball.png"))
    return -3;

  sf::Texture backsidetext;
  backsidetext.loadFromImage(backside);

  sf::Sprite backsidesprite;
  backsidesprite.setTexture(backsidetext);

  sf::Vector2f V;
  sf::Vector2f plat_pos;
  sf::Vector2f plat_size;

  plat_size.x = 100;
  plat_size.y = 10;

  sf::Vector2i localPosition = sf::Mouse::getPosition(window);

  float alpha = localPosition.x / localPosition.y;
  V.x = truncf((2 * alpha) / sqrtf(alpha * alpha + 1)) + 0.5;
  V.y = truncf(2 / sqrtf(alpha * alpha + 1)) + 0.5;

  std::cout << localPosition.x << ' ' << localPosition.y << std::endl;

  sf::RectangleShape platform(plat_size);
  platform.setFillColor(sf::Color::Cyan);
  platform.setPosition(250, 680);
  plat_pos = platform.getPosition();

  float ball_radius = 10.f;

  Block row[10][6];
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 6; j++) {
      row[i][j].setPos(9 + 61 * i, 12 + 30 * j);
    }
  }

  while (window.isOpen()) {
    //window.draw(backsidesprite);

    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 6; j++) {
        block_collision(row[i][j], V, ball);
      }
    }

    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 6; j++) {
        window.draw(row[i][j].block);
      }
    }

    time = clock.getElapsedTime();

    if (ball.getPosition().x >= modeWidth - 2 * ball_radius ||
        (ball.getPosition().x + 2 * ball_radius == platform.getPosition().x &&
         (ball.getPosition().y >= platform.getPosition().y &&
          ball.getPosition().y <
          platform.getPosition().y + platform.getSize().y))) {
      V.x = -V.x;
      ball_hit_sound.play();
    }
    if (ball.getPosition().y <= 0 ||
        (ball.getPosition().y + 2 * ball_radius == platform.getPosition().y &&
         (ball.getPosition().x + 2 * ball_radius >= platform.getPosition().x &&
          ball.getPosition().x < platform.getPosition().x + plat_size.x))) {
      V.y = -V.y;
      ball_hit_sound.play();
    }
    if (ball.getPosition().x < 0) {
      V.x = -V.x;
      ball_hit_sound.play();
    }
    if (ball.getPosition().y >= modeHeight - 2 * ball_radius) {
      window.clear(sf::Color::Black);
      window.draw(game_over_text);
      survived += std::to_string((int) time.asSeconds() / 60);
      survived += " minutes ";
      survived += std::to_string((int) time.asSeconds() - (int) time.asSeconds() / 60 * 60);
      clock.restart();
      survived += " seconds";
      time_survived.setString(survived);
      window.draw(time_survived);
      platform.setPosition(250, 680);
      window.display();
      _sleep(1000);
      break;
    }

    ball.move(V.x, V.y);

    sf::Event event;
    while (window.pollEvent(event)) {

      if (event.type == sf::Event::Closed)
        window.close();

      if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
        window.close();

      if (event.type == sf::Event::KeyPressed) {
        if (event.key.code == sf::Keyboard::D) {
          if (platform.getPosition().x < modeWidth - platform.getSize().x) {
            platform.move(10, 0);
          }
        }
        if (event.key.code == sf::Keyboard::A) {
          if (platform.getPosition().x > 0) {
            platform.move(-10, 0);
          }
        }
      }
    }
    window.draw(platform);
    window.draw(ball);

    window.display();
    window.clear();
  }
  return 0;
}
#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Config.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <cmath>

class Block {
private:
    sf::Vector2f size;

public:
    sf::RectangleShape block;

    Block() {
      size.x = 50;
      size.y = 12;
      block.setSize(size);
      block.setFillColor(sf::Color::Yellow);
    }

    void setPos(float x, float y) {
      block.setPosition(x, y);
    }

    sf::Vector2f getPos() {
      return block.getPosition();
    }

    sf::Vector2f getSize() {
      return block.getSize();
    }
};

void block_collision(Block &block, sf::Vector2f &V, sf::CircleShape &ball) {
    if (ball.getPosition().x >= block.getPos().x - ball.getRadius() &&
        ball.getPosition().x <= block.getPos().x + block.getSize().x - ball.getRadius() &&
        ball.getPosition().y == block.getPos().y + block.getSize().y) {
        V.y = -V.y;
    }
    if (ball.getPosition().x >= block.getPos().x - ball.getRadius() &&
        ball.getPosition().x <= block.getPos().x + block.getSize().x - ball.getRadius() &&
        ball.getPosition().y + 2 * ball.getRadius() == block.getPos().y)  {
        V.y = -V.y;
    }
    if (ball.getPosition().y >= block.getPos().y - ball.getRadius() &&
        ball.getPosition().y <= block.getPos().y + block.getSize().y - ball.getRadius() &&
        ball.getPosition().x + 2 * ball.getRadius() == block.getPos().x)  {
        V.x = -V.x;
    }
}
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
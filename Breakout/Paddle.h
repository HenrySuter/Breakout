#pragma once

#include <SFML/Graphics.hpp>
#include "CONSTANTS.h"

class Paddle
{
public:
    Paddle(sf::RenderWindow* window);
    ~Paddle();

    void moveLeft(float dt);
    void moveRight(float dt);
    void update(float dt);
    void render();
    sf::FloatRect getBounds() const;
    void setWidth(float coeff, float duration);
    void setSticky(sf::Color colour, float duration, bool sticky);
    bool getSticky();
    sf::Vector2f getPos();

private:


    sf::RenderWindow* _window;
    sf::RectangleShape _sprite;
    float _width = PADDLE_WIDTH;
    bool _isAlive;
	bool _isSticky = false;
    float _timeInNewSize = 0.0f;
	float _timeInNewState = 0.0f;
};

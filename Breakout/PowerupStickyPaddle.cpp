#include "PowerupStickyPaddle.h"

PowerupStickyPaddle::PowerupStickyPaddle(sf::RenderWindow* window, Paddle* paddle, Ball* ball, float x_pos)
    : PowerupBase(window, paddle, ball, x_pos)
{
	_sprite.setFillColor(stickyPaddleColour); // Colour of the powerup
}

PowerupStickyPaddle::~PowerupStickyPaddle()
{
}

std::pair<POWERUPS, float> PowerupStickyPaddle::applyEffect()
{
    _paddle->setSticky(stickyPaddleColour, 5.f, true);
    return { stickyPaddle, 5.0f };
}
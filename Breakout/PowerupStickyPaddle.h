#pragma once

#include "PowerupManager.h"

class PowerupStickyPaddle : public PowerupBase
{
public:
    PowerupStickyPaddle(sf::RenderWindow* window, Paddle* paddle, Ball* ball, float x_pos);
    ~PowerupStickyPaddle();

    std::pair<POWERUPS, float> applyEffect() override; // Method to apply the power-up effect
};


#ifndef __GAME_HPP__
#define __GAME_HPP__

#include "GameScreen.hpp"

class Game
{
private:
    GameScreen *screen;

    void tick(float delta);

public:
    Game(/* args */);
    ~Game();
};

#endif

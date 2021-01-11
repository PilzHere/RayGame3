#ifndef __PLAYSCEEN_HPP__
#define __PLAYSCEEN_HPP__

#include "GameScreen.hpp"

class PlayScreen : public GameScreen
{
private:
    /* data */
public:
    PlayScreen(/* args */);
    ~PlayScreen();

    void input(float delta);
    void tick(float delta);
    void render(float delta);
};

#endif

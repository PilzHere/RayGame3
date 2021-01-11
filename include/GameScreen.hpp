#ifndef __GAMESCEEN_HPP__
#define __GAMESCEEN_HPP__

class GameScreen
{
private:
    /* data */
public:
    GameScreen(/* args */);
    virtual ~GameScreen();
    virtual void input(float delta);
    virtual void tick(float delta);
    virtual void render(float delta);
};

#endif

#include <iostream>
#include "raylib.h"
#include "PlayScreen.hpp"

PlayScreen::PlayScreen()
{
    std::cout << "PLAYSCREEN created in heap." << std::endl;
}

PlayScreen::~PlayScreen()
{
    std::cout << "PLAYSCREEN deleted." << std::endl;
}

void PlayScreen::input(float delta)
{
    //GameScreen::input(delta);
    std::cout << "PLAYSCREEN input" << std::endl;
}

void PlayScreen::tick(float delta)
{
    //GameScreen::tick(delta);
    std::cout << "PLAYSCREEN tick" << std::endl;
}

void PlayScreen::render(float delta)
{
    //GameScreen::render(delta);
    std::cout << "PLAYSCREEN render" << std::endl;

    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawText("This is RayGame3!", 190, 200, 20, LIGHTGRAY);
    EndDrawing();
}

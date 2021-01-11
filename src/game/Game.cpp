#include <iostream>
#include "raylib.h"
#include "Game.hpp"
#include "PlayScreen.hpp"

Game::Game()
{
    std::cout << "Game created in heap." << std::endl;

    //SetExitKey(0);
    InitWindow(640, 480, "RayGame3");
    SetTargetFPS(60); // 60, 144

    long frameCount = 0;

    screen = new PlayScreen();

    while (!WindowShouldClose())
    {
        std::cout << "frame#\t" << frameCount++ << std::endl;
        std::cout << "fps:\t" << GetFPS() << std::endl;

        if (screen != NULL)
        {
            tick(GetFrameTime());
        }
    }

    CloseWindow();
}

Game::~Game()
{
    delete screen;
    std::cout << "Game deleted." << std::endl;
}

void Game::tick(float delta)
{
    screen->input(delta);
    screen->tick(delta);
    screen->render(delta);
}
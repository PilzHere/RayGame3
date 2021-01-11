#include <iostream>
#include "raylib.h"
#include "GameScreen.hpp"

GameScreen::GameScreen()
{
    std::cout << "GameScreen created in heap." << std::endl;
}

GameScreen::~GameScreen()
{
    std::cout << "GameScreen deleted." << std::endl;
}

void GameScreen::input(float delta)
{
    //std::cout << "GameScreen input" << std::endl;
}

void GameScreen::tick(float delta)
{
    //std::cout << "GameScreen tick" << std::endl;
}

void GameScreen::render(float delta)
{
    //std::cout << "GameScreen render" << std::endl;
}

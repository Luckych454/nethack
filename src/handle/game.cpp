#include "game.h"
#include "game_impl.h"

Game::Game(const int &choice) : game_impl(new GameImpl(choice)) {}

Game::Game(const Game &rhs) : game_impl(new GameImpl(*rhs.game_impl)) {}

Game &Game::operator=(const Game &rhs)
{
    *game_impl = *rhs.game_impl;
    return *this;
}

Game::~Game() = default;

void Game::Loop()
{
    game_impl->Loop();
}

bool Game::HandleInput(const char &input)
{
    return game_impl->HandleInput(input);
}

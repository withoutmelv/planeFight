#include "game.h"

Game::Game(QWidget *parent)
	: QLabel(parent), isPaused(false)
{

}

Game::~Game()
{

}

const bool Game::getPaused() const
{
	return isPaused;
}

void Game::setPaused(bool paused)
{
	isPaused = paused;
}

const bool Game::isCollided(double x1, double y1, double w1, double h1, double x2, double y2, double w2, double h2) const
{
	return x1 > x2 - w1 && x1 < x2 + w2 && y1 > y2 - h1 && y1 < y2 + h2;
}

#include "game.class.hpp"

Game::Game(void)
{
	this->_score = 0;
	this->_time = 0;
	this->_lives = 1;
	this->_difficult = 1;
	this->_background = 1;
}

Game::Game(Game const &src)
{
	*this = src;
}

Game::Game(unsigned int score, int time, int lives, int difficult, int background):
_score(score), _time(time), _lives(lives), _difficult(difficult), _background(background)
{
}

Game::~Game(void)
{
}

Game&				Game::operator=(Game const &rhs)
{
	this->_score = rhs.getScore();
	this->_time = rhs.getTime();
	this->_lives = rhs.getLives();
	this->_difficult = rhs.getDifficult();
	this->_background = rhs.getBackground();
	return *this;
}

unsigned int		Game::getScore(void) const
{
	return (this->_score);
}

void				Game::setScore(unsigned int score)
{
	this->_score = score;
}

int					Game::getTime(void) const
{
	return (this->_time);
}

void				Game::setTime(int time)
{
	this->_time = time;
}

int					Game::getLives(void) const
{
	return (this->_lives);
}

void				Game::setLives(int lives)
{
	this->_lives = lives;
}

int					Game::getDifficult(void) const
{
	return (this->_difficult);
}

void				Game::setDifficult(int difficult)
{
	this->_difficult = difficult;
}

int					Game::getBackground(void) const
{
	return (this->_background);
}

void				Game::setBackground(int background)
{
	this->_background = background;
}


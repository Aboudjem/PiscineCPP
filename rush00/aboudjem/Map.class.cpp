/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfourne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 11:53:05 by jfourne           #+#    #+#             */
/*   Updated: 2019/01/13 12:38:36 by jfourne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Map.class.hpp"

Map::Map(void): map_y(MAP_Y), map_x(MAP_X)
{
	int		x = 0;
	int		y = 0;

	while (y < 200)
	{
		x = 0;
		while (x < 200)
		{
			this->collision[y][x] = 0;
			x++;
		}
		y++;
	}
}

Map::Map(Map const &src): map_y(MAP_Y), map_x(MAP_X)
{
	*this = src;
}

Map::~Map(void)
{
}

Map&			Map::operator=(Map const &rhs)
{
	int		x = 0;
	int		y = 0;

	while (y < 200)
	{
		x = 0;
		while (x < 200)
		{
			this->collision[y][x] = rhs.collision[rhs.map_y][rhs.map_x];
			x++;
		}
		y++;
	}
	return *this;
}

int				Map::getMap_y(void) const
{
	return (this->map_y);
}

int				Map::getMap_x(void) const
{
	return (this->map_x);
}

int			Map::checkCollision(int y, int x, int entity)
{
	if (entity == PLAYER)
	{
		if (this->collision[y][x] > PLAYER)
			return (1);
	}
	else
	{
		if (this->collision[y][x] == PLAYER)
			return (1);
	}
	return (0);
}

void		Map::setPosition(int y, int x, int value)
{
	this->collision[y][x] = value;
}

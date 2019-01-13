/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfourne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 11:50:10 by jfourne           #+#    #+#             */
/*   Updated: 2019/01/13 12:34:25 by jfourne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_CLASS_HPP
# define MAP_CLASS_HPP

#include <iostream>
#include <ncurses.h>

#define MAP_Y 25
#define MAP_X 100
#define PLAYER 1
#define OBS 2
#define ENEMY 3

class				Map
{
	public:
		Map(void);
		Map(Map const &src);
		~Map(void);

		Map&		operator=(Map const &rhs);

		int			getMap_y(void) const;
		int			getMap_x(void) const;
		int			checkCollision(int y, int x, int entity);
		void		setPosition(int y, int x, int value);

	private:
		int const	map_y;
		int const	map_x;
		int			collision[MAP_Y][MAP_X];
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudjem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 18:38:20 by aboudjem          #+#    #+#             */
/*   Updated: 2019/01/07 22:25:55 by aboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"


Pony::Pony(std::string _name, int _age, std::string _color) : name(_name), age(_age), color(_color)
{
	std::cout << "pony name is " << _name << " and his age is " << _age << " it is " << _color << std::endl;
	return;
}

Pony::~Pony(void) {
	return;
}



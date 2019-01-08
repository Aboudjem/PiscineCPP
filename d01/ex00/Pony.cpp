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

void Pony::Talking(std::string _name, int _age, std::string _color)
{
	std::cout << "Hello I'm " << _name << ", a "
		<< _color << " pony my age is " << _age << std::endl;
}

Pony::Pony(std::string _name, int _age, std::string _color) : name(_name), age(_age), color(_color)
{
	std::cout << "Pony " << _name << " has been created" << std::endl;
	Talking(_name, _age, _color);
	return;
}

Pony::~Pony(void) {
	std::cout << "Pony " << this->name << " is dead R.I.P\n" << std::endl;
	return;
}



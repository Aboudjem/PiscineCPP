/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudjem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 18:39:11 by aboudjem          #+#    #+#             */
/*   Updated: 2019/01/07 21:26:51 by aboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Pony {
	public:
		std::string name;
		int			age;
		std::string color;
		Pony(std::string name, int age, std::string color);
		~Pony(void);
		void Talking(std::string name, int age, std::string color);
};

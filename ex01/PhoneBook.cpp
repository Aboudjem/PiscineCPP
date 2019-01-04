/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudjem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/03 16:11:26 by aboudjem          #+#    #+#             */
/*   Updated: 2019/01/03 19:14:57 by aboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

User::User(void) {

    std::cout << "Enter first name: ";
	std::cin >> this->firstname;
	std::cout << "Enter last name: ";
	std::cin >> this->lastname;
	std::cout << "Enter Nickname: ";
	std::cin >> this->nickname;
	std::cout << "Enter Login: ";
	std::cin >> this->login;
	std::cout << "Enter Postal Address: ";
	std::cin >> this->postaladdress;
	std::cout << "Enter Mail address: ";
	std::cin >> this->mail;
	std::cout << "Enter Phone number: ";
	std::cin >> this->phone;
	std::cout << "Enter Birth Date: ";
	std::cin >> this->birth;
	std::cout << "Enter Favourite meal: ";
	std::cin >> this->meal;
	std::cout << "Enter Underwear's color: " ;
	std::cin >> this->underwear;
	std::cout << "Enter darkest secret: ";
	std::cin >> this->secret;

    std::cout << this->firstname << "\n"
               << this->lastname << "\n"
               << this->nickname << "\n"
               << this->login << "\n"
               << this->postaladdress << "\n"
               << this->mail << "\n"
               << this->phone << "\n"
               << this->birth << "\n"
               << this->meal << "\n"
               << this->underwear << "\n"
               << this->secret << std::endl;
}


User::~User(void) {
	return ;
}



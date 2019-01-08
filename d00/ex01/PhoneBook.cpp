/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudjem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 13:08:33 by aboudjem          #+#    #+#             */
/*   Updated: 2019/01/08 13:27:47 by aboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


void User::Add(void) {
	std::cout << "Enter first name: ";
	std::cin >> this->firstname;
	this->firstname = CheckSize(this->firstname);
	std::cout << "Enter last name: ";
	std::cin >> this->lastname;
	this->lastname = CheckSize(this->lastname);
	std::cout << "Enter Nickname: ";
	std::cin >> this->nickname;
	this->nickname = CheckSize(this->nickname);
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
}

User::User(void) {
	return;
}

User::~User(void) {
	return;
}
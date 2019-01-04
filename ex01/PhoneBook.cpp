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

void displaySearch(User *Users, int i) {

    int id;

    id = 0;
    std::cout << "-------------------------------------------" << std::endl;
    while (id < i) {
        std::cout << "         " << id << "|";
        fillSpace(Users[id].firstname);
        std::cout << Users[id].firstname;
        std::cout << "|";
        fillSpace(Users[id].lastname);
        std::cout << Users[id].lastname;
        std::cout << "|";
        fillSpace(Users[id].nickname);
        std::cout << Users[id].nickname << std::endl;
        id++;
    }
}

void fillSpace(std::string str) {
    int j = 0;
    if (str.length() < 10) {
        j = 10 - str.length();
        while (j > 0) {
            std::cout << " ";
            j--;
        }
    }
}

void User::Add(void) {
    std::cout << "Enter first name: ";
    std::cin >> this->firstname;
    if ((this->firstname.length()) > 10) {
        this->firstname = this->firstname.substr(0, 10);
        this->firstname[9] = '.';
    }
    std::cout << "Enter last name: ";
    std::cin >> this->lastname;
    if ((this->lastname.length()) > 10) {
        this->lastname = this->lastname.substr(0, 10);
        this->lastname[9] = '.';
    }
    std::cout << "Enter Nickname: ";
    std::cin >> this->nickname;
    if ((this->nickname.length()) > 10) {
        this->nickname = this->nickname.substr(0, 10);
        this->nickname[9] = '.';
    }
    std::cout << "Enter Login: ";
    std::cin >> this->login;
    if ((this->login.length()) >= 10) {
        this->login = this->login.substr(0, 10);
        this->login[9] = '.';
    }
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handleUsers.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudjem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 13:47:14 by aboudjem          #+#    #+#             */
/*   Updated: 2019/01/08 13:47:17 by aboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void displaySearch(User *Users, int i) {

    int id;

    id = 0;
    std::cout << "     Index| FirstName|  LastName|  NickName" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    while (id < i) {
        std::cout << std::setw(10) << id << "|";
        std::cout << std::setw(10) << Users[id].firstname << "|";
        std::cout << std::setw(10) << Users[id].lastname << "|";
        std::cout << std::setw(10) << Users[id].nickname << std::endl;
        id++;
    }
}

void displayDetails(User Users) {
    std::cout <<
              "\nFirstname:         " << Users.firstname <<
              "\nLastname:          " << Users.lastname <<
              "\nNickname:          " << Users.nickname <<
              "\nLogin:             " << Users.login <<
              "\nPostal address:    " << Users.postaladdress <<
              "\nMail address:      " << Users.mail <<
              "\nPhone Number:      " << Users.phone <<
              "\nBirth Date:        " << Users.birth <<
              "\nFavorite Meal:     " << Users.meal <<
              "\nUnderwear Color:   " << Users.underwear <<
              "\nDarkest Secret:    " << Users.secret
              << std::endl;
}

std::string CheckSize(std::string str){
    if (str.length() > 10){
        str = str.substr(0,10);
        str[9] = '.';
    }
    return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudjem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 13:47:27 by aboudjem          #+#    #+#             */
/*   Updated: 2019/01/08 13:47:29 by aboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main() {
    std::cout << "Welcome To The PhoneBook App !\n";
    User Users[8];
    int i = -1;
    int j = 0;
    std::string select;
    while (1) {
        std::cout << "\nPlease select:\n" << "[ADD]\n" << "[SEARCH]\n" << "[EXIT]" << std::endl;
        std::cin >> select;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (select == "ADD" || select == "add" || select == "Add") {
            i = (i == -1) ? 0 : i;
            if (i > 7)
                std::cout << "Contacts max (8) reached !\n";
            else
                Users[i++].Add();
            if (std::cin.eof())
                exit(0);
        } else if (select == "SEARCH" || select == "search" || select == "Search") {
            if (i != -1) {
                displaySearch(Users, i);
                std::cout << "Which contact would you like to see ? \n";
                std::cin >> j;
                if (((j > 7 || j < 0) || (j >= i)))
                    std::cout << "Incorrect input !\n";
                else if (std::cin.good())
                    displayDetails(Users[j]);
                if (std::cin.eof())
                    exit(0);
            } else
                std::cout << "No contact yet" << std::endl;
        } else if ((select == "EXIT" || select == "exit" || select == "Exit") || (std::cin.eof()))
            exit(0);
        else
            std::cout << "Wrong input !";
    }
}

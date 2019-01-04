/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudjem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 21:18:40 by aboudjem          #+#    #+#             */
/*   Updated: 2019/01/04 21:18:41 by aboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main() {
    std::cout << "Welcome To The PhoneBook App !\n";
    User Users[8];
    int i = 0;
    std::string select;
    while (1) {
        std::cout << "\nPlease select:\n" << "[ADD]\n" << "[SEARCH]\n" << "[EXIT]" << std::endl;
        std::cin >> select;
        if (select == "ADD" || select == "add" || select == "Add") {
            if (i > 7)
                std::cout << "Contacts max (8) reached !\n";
            else
                Users[i++].Add();
        } else if (select == "SEARCH" || select == "search" || select == "Search")
            displaySearch(Users, i);
        else if (select == "EXIT" || select == "exit" || select == "Exit")
            exit(0);
    }
}

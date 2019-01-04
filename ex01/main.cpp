#include <iostream>
#include "PhoneBook.hpp"

int main() {
    User Users[];
    int i = 0;
    std::string select;
    while (1) {
        std::cout << "Please select:\n" << "[ADD]\n" << "[SEARCH]\n" << "[EXIT]" << std::endl;
        std::cin >> select;
        if (select == "ADD") {
            std::cout << "Adding";
            Users[i];
            i++;

        } else if (select == "SEARCH") {
            std::cout << "Search";
        } else if (select == "EXIT") {
            std::cout << "Exit";

        }
    }
    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudjem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 13:47:02 by aboudjem          #+#    #+#             */
/*   Updated: 2019/01/08 13:47:05 by aboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <iomanip>

class User {
	public:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string login;
		std::string postaladdress;
		std::string mail;
		std::string phone;
		std::string birth;
		std::string meal;
		std::string underwear;
		std::string secret;
		User(void);
		~User(void);
		void Add(void);
};
void    displayDetails(User Users);
std::string    CheckSize(std::string str);
void    displaySearch(User *Users, int i);
#endif

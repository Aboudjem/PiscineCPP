/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudjem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/03 14:03:20 by aboudjem          #+#    #+#             */
/*   Updated: 2019/01/03 16:09:46 by aboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	int i;
	int arg;

	arg = 1;
	i = 0;
	if (argc > 1)
	{
		while(arg <= argc - 1)
		{
			while (argv[arg][i] != '\0')
			{
				std::cout << (char)(toupper(argv[arg][i++]));
			}
			std::cout << " ";
			i = 0;
			arg++;
		}
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	std::cout << std::endl;
	return(0);
}


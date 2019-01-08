/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudjem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 18:37:30 by aboudjem          #+#    #+#             */
/*   Updated: 2019/01/07 22:26:08 by aboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"


void ponyOnTheStack(){

	Pony little("Little", 5, "red");
}

void ponyOnTheHeap(){
	Pony *big = new Pony("Big", 10, "blue");
	delete big;
}
int main () {
	ponyOnTheStack();
	ponyOnTheHeap();
}

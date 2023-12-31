/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 07:18:48 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/05 13:17:42 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

int main ()
{
	ClapTrap John("John");
	ClapTrap Alice("Alice");
	
	John.attack(Alice.getName());
	John.attack(Alice.getName());
	Alice.attack(John.getName());

	John.attack(Alice.getName());
	John.attack(Alice.getName());
	John.attack(Alice.getName());

	John.attack(Alice.getName());
	John.attack(Alice.getName());
	John.attack(Alice.getName());

	John.takeDamage(9);
	John.takeDamage(20);
	John.beRepaired(20);
	John.attack(Alice.getName());
	return (0);
}
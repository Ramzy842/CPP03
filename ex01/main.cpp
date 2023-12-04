/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 07:18:48 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/04 16:45:50 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

int main ()
{
	ClapTrap John("John");
	ScavTrap Alice("Alice");
	
	// John.attack(Alice.getName());
	// John.attack(Alice.getName());
	Alice.attack(John.getName());

	// John.attack(Alice.getName());
	// John.attack(Alice.getName());
	// John.attack(Alice.getName());

	// John.attack(Alice.getName());
	// John.attack(Alice.getName());
	// John.attack(Alice.getName());

	// John.attack(Alice.getName());
	// John.attack(Alice.getName());
	// John.attack(Alice.getName());
	// John.takeDamage(20);
	// John.takeDamage(20);
	return (0);
}
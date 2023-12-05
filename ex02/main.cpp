/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 07:18:48 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/05 15:49:50 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

int main ()
{
	ClapTrap John("John");
	ScavTrap Alice("Alice");
	 
	// John.attack(Alice.getName());
	// John.attack(Alice.getName());
	John.attack("Eren");
	Alice.attack("Doe");
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());

	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());

	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.attack(John.getName());
	Alice.takeDamage(50);
	Alice.takeDamage(40);
	Alice.takeDamage(40);
	Alice.guardGate();
	return (0);
}
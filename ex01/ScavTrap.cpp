/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:31:12 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/04 16:46:43 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	// this->setHitPoints(100);
	// this->setEnergyPoints(50);
	// this->setAttackDamage(20);
	// this->setName("Default");
	std::cout << "ScavTrap has been created" << std::endl;
}

ScavTrap::ScavTrap(std::string Name)
{
	// this->setHitPoints(100);
	// this->setEnergyPoints(50);
	// this->setAttackDamage(20);
	// this->setName(Name);
	std::cout << "ScavTrap has been created" << std::endl;
}

// ScavTrap::ScavTrap(const ScavTrap& other)
// {
	
// }

// ScavTrap& ScavTrap::operator=(const ScavTrap& other)
// {
// 	(void) other;
// 	return (*this);
// }

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap has been destroyed" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (this->getEnergyPoints() > 0)
	{
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		std::cout << "ScavTrap " << this->getName() <<  " attacks " << target << ", causing " 
			<< this->getAttackDamage() << " points of damage!" << std::endl;
	}
	else
		std::cout << "Not enough energy points to attack!" << std::endl;
}
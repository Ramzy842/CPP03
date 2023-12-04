/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 07:18:44 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/04 11:21:48 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	this->name = "Default";
}

void ClapTrap::attack(const std::string& target) {
	if (this->energyPoints > 0)
	{
		this->energyPoints = this->energyPoints - 1;
			std::cout << "ClapTrap " << this->name <<  " attacks " << target << ", causing " 
				<< this->attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "Not enough energy points to attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is already dead." << std::endl;
	}
	else if ((int)amount >= this->energyPoints)
	{
		this->energyPoints = this->energyPoints - amount;
		std::cout << "ClapTrap " << this->name << " took " << amount << " points of damage!" << std::endl;
		std::cout << "ClapTrap " << this->name << " has no energy points left!" << std::endl;
		std::cout << "ClapTrap " << this->name << " is dead." << std::endl;
	}
	else
	{
		this->energyPoints = this->energyPoints - amount;
		std::cout << "ClapTrap " << this->name << "took " << amount << " points of damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energyPoints > 0) {
		this->hitPoints = this->hitPoints + amount;
		std::cout << "ClapTrap " << this->name << " repaired itself by gaining " << amount << " hit points back." << std::endl;
	}
	else
		std::cout << "Not enough energy points to repair!" << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
	this->name = Name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "ClapTrap has been created!" << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap has been destroyed!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	(void)other;
	return *this;
};

void ClapTrap::setName(std::string Name)
{
	this->name = Name;
}
const std::string ClapTrap::getName(void)
{
	return (this->name);
}
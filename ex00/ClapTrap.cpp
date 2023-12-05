/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 07:18:44 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/05 13:18:24 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->setHitPoints(10);
	this->setEnergyPoints(10);
	this->setAttackDamage(0);
	this->setName("Default");
	std::cout << "ClapTrap has been created!" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (this->getHitPoints() > 0)
	{
		if (this->getEnergyPoints() > 0)
		{
			this->setEnergyPoints(this->getEnergyPoints() - 1);
			std::cout << "ClapTrap " << this->getName() <<  " attacks " << target << ", causing " 
				<< this->getAttackDamage() << " points of damage!" << std::endl;
		}
		else
			std::cout << "Not enough energy points to attack!" << std::endl;
	}
	else
		std::cout << "Not enough hit points to attack! ClapTrap " << this->getName() << " is already dead." << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->getHitPoints() <= 0)
		std::cout << "Taking damage has no effect, ClapTrap " << this->getName() << " is already dead." << std::endl;
	else if ((int)amount >= this->getHitPoints())
	{
		this->setHitPoints(this->getHitPoints() - amount);
		std::cout << "ClapTrap " << this->getName() << " took " << amount << " points of damage!" << std::endl;
		std::cout << "ClapTrap " << this->getName() << " has no hit points left!" << std::endl;
		std::cout << "ClapTrap " << this->getName() << " is dead." << std::endl;
	}
	else
	{
		setHitPoints(this->getHitPoints() - amount);
		std::cout << "ClapTrap " << this->getName() << " took " << amount << " points of damage!" << std::endl;
		std::cout << "ClapTrap " << this->getName() << " has " << this->getHitPoints() << " points left." << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->getHitPoints() <= 0)
		std::cout << "Cannot repair! ClapTrap " << this->getName() << " is already dead." << std::endl;
	else if (this->getEnergyPoints() > 0 ) {
		setHitPoints(getHitPoints() + amount);
		std::cout << "ClapTrap " << this->getName() << " repaired itself by gaining " << amount << " hit points back." << std::endl;
	}
	else
		std::cout << "Not enough energy points to repair!" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
	this->setHitPoints(10);
	this->setEnergyPoints(10);
	this->setAttackDamage(0);
	this->setName(Name);
	std::cout << "ClapTrap has been created!" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap has been destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
	std::cout << "ClapTrap Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		this->setName(other.name);
		this->setHitPoints(other.hitPoints);
		this->setEnergyPoints(other.energyPoints);
		this->setAttackDamage(other.attackDamage);
	}
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	return *this;
};

// Setters and Getters

void ClapTrap::setName(std::string Name) {
	this->name = Name;
}

void ClapTrap::setHitPoints(int amount){
	this->hitPoints = amount;
}

void ClapTrap::setEnergyPoints(int amount) {
	this->energyPoints = amount;
}

void ClapTrap::setAttackDamage(int amount){
	this->attackDamage = amount;
}

const std::string ClapTrap::getName(void) const {
	return (this->name);
}

int ClapTrap::getHitPoints(void) const {
	return (this->hitPoints);
}

int ClapTrap::getEnergyPoints(void) const  {
	return (this->energyPoints);
}

int ClapTrap::getAttackDamage(void) const  {
	return (this->attackDamage);
}
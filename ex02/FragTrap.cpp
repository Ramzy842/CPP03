/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 23:21:30 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/11 23:21:31 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

FragTrap::FragTrap()
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap has been created" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "FragTrap has been created" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
	std::cout << "FragTrap Copy Constructor" << std::endl; 
	*this = other;
	std::cout << "---------------------------------------------" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
	{
		this->setName(other.getName());
		this->setHitPoints(other.getHitPoints());
		this->setAttackDamage(other.getAttackDamage());
		this->setEnergyPoints(other.getEnergyPoints());
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap has been destroyed" << std::endl;
}

void FragTrap::attack(const std::string& target) {
	if (this->getEnergyPoints() > 0)
	{
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		std::cout << "FragTrap " << this->getName() <<  " attacks " << target << ", causing " 
			<< this->getAttackDamage() << " points of damage!" << std::endl;
	}
	else
		std::cout << "Not enough energy points to attack!" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "a positive high fives request" << std::endl;
}
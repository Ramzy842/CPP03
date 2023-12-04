/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:31:12 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/04 12:28:02 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap has been created" << std::endl;
}

ScavTrap::ScavTrap(std::string Name)
{
	this->setName(Name);
	std::cout << "ScavTrap has been created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap has been destroyed" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
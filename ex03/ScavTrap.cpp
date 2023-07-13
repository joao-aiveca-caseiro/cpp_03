/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 22:51:47 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/11 18:25:10 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->_hp = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "ScavTrap: Default constructor called" << std::endl;  
}

ScavTrap::ScavTrap(const ScavTrap &scav): ClapTrap(scav)
{
	this->_name = scav._name;
	this->_hp = scav._hp;
	this->_energy = scav._energy;
	this->_damage = scav._damage;
	std::cout << "ScavTrap: Copy constructor called" << std::endl; 	
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hp = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "ScavTrap: Name constructor called" << std::endl;  	
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called" << std::endl; 	
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &scav)
{
	if (this != &scav)
	{
		this->_name = scav._name;
		this->_hp = scav._hp;
		this->_energy = scav._energy;
		this->_damage = scav._damage;		
	}
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energy > 0 && this->_hp > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target 
			<< ", dealing " << this->_damage << " damage!" << std::endl;
		this->_energy--;		
	}
	else if (this->_energy <= 0)
		std::cout << "ScavTrap " << this->_name << " has no energy points left, it cannot attack!" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " has no hit points left, it cannot attack!" << std::endl;	
}

void	ScavTrap::guardGate(void)
{
	if (this->_hp > 0)
		std::cout << "🛡️  ScavTrap " << this->_name << " is now in gate keeper mode 🛡️" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " has no hit points left! It cannot enter gate keeper mode!" << std::endl;	
}
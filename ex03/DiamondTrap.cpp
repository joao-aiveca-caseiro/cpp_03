/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 01:43:23 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/13 04:16:21 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap(), FragTrap()
{
	this->_hp = FragTrap::_hp;
	this->_damage = FragTrap::_damage;
	ScavTrap::_energy = 50;
	std::cout << "DiamondTrap: Default constructor called" << std::endl;  
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamond): ClapTrap(diamond), ScavTrap(diamond), FragTrap(diamond)
{
	this->_name = diamond._name;
	this->_hp = diamond._hp;
	this->_energy = diamond._energy;
	this->_damage = diamond._damage;
	std::cout << "DiamondTrap: Copy constructor called" << std::endl; 	
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->_name = name;	
	this->_hp = FragTrap::_hp;
	this->_damage = FragTrap::_damage;
	ScavTrap::_energy = 50;
	std::cout << "DiamondTrap: Name constructor called" << std::endl;
	std::cout << "DiamondTrap: Created with " << this->_hp << " hp, " << this->_energy << " energy, and " << this->_damage << " attack damage." << std::endl;  	
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: Destructor called" << std::endl; 	
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &diamond)
{
	if (this != &diamond)
	{
		this->_name = diamond._name;
		this->_hp = diamond._hp;
		this->_energy = diamond._energy;
		this->_damage = diamond._damage;		
	}
	return (*this);
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am DiamondTrap " << this->_name << ", but you can also call me ClapTrap " << ClapTrap::_name << std::endl;
}
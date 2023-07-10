/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:01:20 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/10 22:33:53 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_hp = 10;
	this->_energy = 10;
	this->_damage = 0;
	std::cout << "Default constructor called" << std::endl;  
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
	this->_name = clap._name;
	this->_hp = clap._hp;
	this->_energy = clap._energy;
	this->_damage = clap._damage;
	std::cout << "Copy constructor called" << std::endl; 	
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hp = 10;
	this->_energy = 10;
	this->_damage = 0;
	std::cout << "Name constructor called" << std::endl; 
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl; 	
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &clap)
{
	if (this != &clap)
	{
		this->_name = clap._name;
		this->_hp = clap._hp;
		this->_energy = clap._energy;
		this->_damage = clap._damage;		
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energy > 0 && this->_hp > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target 
			<< ", dealing " << this->_damage << " damage!" << std::endl;
		this->_energy--;		
	}
	else if (this->_energy <= 0)
		std::cout << "ClapTrap " << this->_name << " has no energy points left, it cannot attack!" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " has no hit points left, it cannot attack!" << std::endl;	
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hp = this->_hp - amount;
	if (this->_hp < 0)
		this->_hp = 0;
	std::cout << "ClapTrap " << this->_name << " was dealt " 
		<< amount << " damage! It has " << this->_hp << " hit points left." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0 && this->_hp > 0)
	{
		this->_hp = this->_hp + amount;
		if (this->_hp > 10)
			this->_hp = 10;
		std::cout << "ClapTrap " << this->_name << " has healed " << amount 
			<< " hit points. It has " << this->_hp << " hit points left." << std::endl;
		this->_energy--;		
	}
	else if (this->_energy <= 0)
		std::cout << "ClapTrap " << this->_name << " has no energy points left, it cannot repair itself!" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " has no hit points left, it cannot repair itself!" << std::endl;	
}
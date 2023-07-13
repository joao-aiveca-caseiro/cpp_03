/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 22:51:47 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/11 18:49:53 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->_hp = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << "FragTrap: Default constructor called" << std::endl;  
}

FragTrap::FragTrap(const FragTrap &frag): ClapTrap(frag)
{
	this->_name = frag._name;
	this->_hp = frag._hp;
	this->_energy = frag._energy;
	this->_damage = frag._damage;
	std::cout << "FragTrap: Copy constructor called" << std::endl; 	
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hp = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << "FragTrap: Name constructor called" << std::endl;  	
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Destructor called" << std::endl; 	
}

FragTrap	&FragTrap::operator=(const FragTrap &Frag)
{
	if (this != &Frag)
	{
		this->_name = Frag._name;
		this->_hp = Frag._hp;
		this->_energy = Frag._energy;
		this->_damage = Frag._damage;		
	}
	return (*this);
}

void	FragTrap::attack(const std::string &target)
{
	if (this->_energy > 0 && this->_hp > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target 
			<< ", dealing " << this->_damage << " damage!" << std::endl;
		this->_energy--;		
	}
	else if (this->_energy <= 0)
		std::cout << "FragTrap " << this->_name << " has no energy points left, it cannot attack!" << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " has no hit points left, it cannot attack!" << std::endl;	
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_hp > 0)
		std::cout << "👏  FragTrap " << this->_name << " received a high fives request 👏" << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " has no hit points left! It cannot receive high fives requests!" << std::endl;	
}
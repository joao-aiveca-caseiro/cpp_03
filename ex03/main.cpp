/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:01:26 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/13 03:23:03 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::string	target = "Target";
	
	DiamondTrap diamond("DiamondMeister3000");
	diamond.takeDamage(0);	
	diamond.takeDamage(42);
	diamond.attack(target);
	diamond.beRepaired(10);
	diamond.highFivesGuys();
	diamond.guardGate();

	std::cout << std::endl;

	diamond.whoAmI();
}
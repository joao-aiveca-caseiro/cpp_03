/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:01:26 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/11 18:26:08 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::string	target = "Target";

	ClapTrap clap("ClapMaster2000");
	clap.attack(target);
	clap.takeDamage(3);
	clap.beRepaired(2);

	
	std::cout << std::endl;
	
	ScavTrap scav("ScavMeister3000");
	scav.takeDamage(0);	
	scav.takeDamage(42);
	scav.attack(target);
	scav.beRepaired(10);
	scav.guardGate();

	std::cout << std::endl;

	for (int i = 0; i < 49; i++)
		scav.attack(target);

	std::cout << std::endl;

	ScavTrap scavvy("ScavLord4000");	
	scavvy.takeDamage(400);
	scavvy.guardGate();
}
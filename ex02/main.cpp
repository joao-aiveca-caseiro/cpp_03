/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:01:26 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/11 18:51:01 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::string	target = "Target";

	ClapTrap clap("ClapMaster2000");
	clap.attack(target);
	clap.takeDamage(3);
	clap.beRepaired(2);

	
	std::cout << std::endl;
	
	FragTrap frag("FragMeister3000");
	frag.takeDamage(0);	
	frag.takeDamage(42);
	frag.attack(target);
	frag.beRepaired(10);
	frag.highFivesGuys();

	std::cout << std::endl;

	for (int i = 0; i < 99; i++)
		frag.attack(target);

	std::cout << std::endl;

	FragTrap fraggy("FragLord4000");	
	fraggy.takeDamage(400);
	fraggy.highFivesGuys();
}
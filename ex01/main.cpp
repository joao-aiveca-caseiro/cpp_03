/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:01:26 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/10 22:48:18 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::string	target = "Target";

	ClapTrap clap("ClapMaster2000");
	clap.attack(target);
	clap.takeDamage(3);
	clap.beRepaired(2);
	for (int i = 0; i < 9; i++)
		clap.attack(target);
	
	std::cout << std::endl;
	
	ClapTrap clappy("ClapMeister3000");
	clappy.takeDamage(42);
	clappy.attack(target);

	std::cout << std::endl;
}
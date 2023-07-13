/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 01:41:26 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/13 04:19:41 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap: public ScavTrap, public FragTrap
{
	public:
	
		DiamondTrap();
		DiamondTrap(const DiamondTrap &diamond);
		DiamondTrap(std::string name);
		~DiamondTrap();

		
		DiamondTrap	&operator=(const DiamondTrap &diamond);		
		void		whoAmI(void);
		void		attack(const std::string &target);

	private:

		std::string	_name;
};


#endif
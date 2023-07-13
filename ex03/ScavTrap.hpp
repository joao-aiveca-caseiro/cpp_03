/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 22:51:44 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/13 04:19:51 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap
{
	public:
	
		ScavTrap();
		ScavTrap(const ScavTrap &scav);
		ScavTrap(std::string name);
		~ScavTrap();

		ScavTrap	&operator=(const ScavTrap &scav);
		void		attack(const std::string &target);
		void		guardGate(void);
};

#endif
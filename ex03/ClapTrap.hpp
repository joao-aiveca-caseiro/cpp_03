/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:01:24 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/13 04:19:37 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	public:

		ClapTrap();
		ClapTrap(const ClapTrap &clap);
		ClapTrap(std::string name);
		~ClapTrap();
		
		ClapTrap	&operator=(const ClapTrap &clap);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	protected:
	
		std::string	_name;
		int			_hp;
		int			_energy;
		int			_damage;	
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiveca- <jaiveca-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 22:51:44 by jaiveca-          #+#    #+#             */
/*   Updated: 2023/07/11 18:45:24 by jaiveca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
	
		FragTrap();
		FragTrap(const FragTrap &frag);
		FragTrap(std::string name);
		~FragTrap();

		FragTrap	&operator=(const FragTrap &frag);
		void		attack(const std::string &target);
		void		highFivesGuys(void);
};

#endif
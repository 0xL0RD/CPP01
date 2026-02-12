/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 15:04:32 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/12 18:30:16 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack(void) const
{
	std::cout << this->_name
		<< " attacks with their ";

	if (this->_weapon != NULL)
		std::cout << this->_weapon->getType();
	else
		std::cout << "fists";
	std::cout << std::endl;
}

void		HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

HumanB::HumanB(std::string name) : _weapon (NULL), _name (name) 
{
	if (name.empty() == true)
		this->_name = "Undefined";
}

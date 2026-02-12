/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 15:04:32 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/12 16:22:17 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(void) const
{
	std::cout << this->_name
		<< " attacks with their "
		<< this->_weapon.getType()
		<< std::endl;
}

void		HumanA::setWeapon(Weapon &weapon)
{
	this->_weapon = weapon;
}

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon (weapon)
{
	this->_name = name;
	if (name.empty() == true)
		this->_name = "Undefined";
	//this->_weapon = weapon;
}

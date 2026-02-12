/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 15:04:32 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/12 18:27:36 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string	const	&Weapon::getType(void) const
{
	std::string const	&type = this->_type;
	return (type);
}

void		Weapon::setType(std::string type)
{
	this->_type = type;
	if (type.empty() == true)
		this->_type = "undefined weapon";
}

Weapon::Weapon(std::string type) : _type (type)
{
	if (type.empty() == true)
		this->_type = "undefined weapon";
}

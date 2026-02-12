/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:47:24 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/12 11:13:26 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->_name << ": "
		<< "BraiiiiiiinnnzzzZ..."
		<< std::endl;
	return ;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	if (name.empty() == true)
		this->_name = "Undefined";
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << ": "
		<< "Destroyed"
		<< std::endl;
}

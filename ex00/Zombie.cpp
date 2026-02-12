/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:47:24 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/12 09:08:15 by rubsanch         ###   ########.fr       */
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
	if (name.empty() == 1)
		return ;
	this->_name = name;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << ": "
		<< "Destroyed"
		<< std::endl;
}

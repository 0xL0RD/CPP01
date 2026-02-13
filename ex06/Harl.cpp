/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 14:44:21 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/13 17:57:41 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void) const
{
	std::cout << "[DEBUG] I love having extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-specialketchup burger. "
		<< "I really do!"
		<< std::endl;
}

void	Harl::info(void) const
{
	std::cout << "[INFO] I cannot believe adding extra bacon costs more money. "
	   << "You didn’t put enough bacon in my burger! If you did, "
	   << "I wouldn’t be asking for more!"
	   << std::endl;
}

void	Harl::warning(void) const
{
	std::cout << "[WARNING] "
		<< "I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming for years, whereas you started working here "
		<< "just last month."
		<< std::endl;
}

void	Harl::error(void) const
{
	std::cout << "[ERROR] "
		<< "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}

void	Harl::complain(std::string level) const
{
	static const std::string	db[LEVELS_LEN] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	unsigned int		index;

	index = LEVELS_LEN;
	for (unsigned int i = 0; i < LEVELS_LEN; i++)
	{
		if (db[i] == level)
		{
			index = i;
			break ;
		}
	}
	switch (index)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break ;
		default:
			std::cout << "Level " << level << " is WRONG" << std::endl;
	};
}

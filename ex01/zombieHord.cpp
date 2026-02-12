/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHord.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:47:24 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/12 12:28:09 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie* zombieHorde(int N, std::string name)
{
	Zombie				*z;
	std::stringstream	sstm;

	if (N < 1)
	{
		std::cout << "[ERROR]"
			<< " Horde qtty should be more than 0"
			<< std::endl;
		return (NULL);
	}
	z = new Zombie[N];
	if (z == NULL)
		return (NULL);
	for (int i = 0; i < N; i++)
	{
		sstm.str("");
		sstm.clear();
		sstm << name;
		//sstm << "_" << i;
		z[i].name_set(sstm.str());
	}
	return (z);
}

void	zombieHorde_delete(Zombie *z)
{
	delete [] z;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:47:24 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/12 10:40:36 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zb_inner(void)
{
	Zombie	*z;

	z = newZombie("zHEAP");
	return (z);
}

Zombie *zb_inner_bad(void)
{
	Zombie	*z;

	z = newZombie("");
	return (z);
}

int	main(void)
{
	Zombie	*z;

	z = zb_inner();
	if (z == NULL)
		return (1);
	z->announce();
	delete (z);
	std::cout << std::endl;

	z = zb_inner_bad();
	if (z == NULL)
		std::cout << "Bad call" << std::endl;
	else
	{
		z->announce();
		delete (z);
	}

	std::cout << std::endl;
	randomChump("zSTACK");
	std::cout << std::endl;

	z = new Zombie("");
	if (z == NULL)
		return (1);
	z->announce();
	delete (z);
	return (0);
}

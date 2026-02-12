/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:47:24 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/12 12:29:19 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int		qtty = 3;

	horde = zombieHorde(qtty, "zHorde");
	if (horde == NULL)
		return (1);
	for (int i = 0; i < qtty; i++)
	{
		std::cout << i << ": ";
		horde[i].announce();
	}
	zombieHorde_delete(horde);
	return (0);
}

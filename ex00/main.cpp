/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:47:24 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/12 09:16:26 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zb_inner(void)
{
	Zombie	*z;

	z = new Zombie("zHEAP");
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
	Zombie	s("zSTACK");
	s.announce();
	return (0);
}

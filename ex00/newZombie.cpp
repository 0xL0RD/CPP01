/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 07:17:13 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/12 08:52:35 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie	*z;

	if (name.empty() == 1)
		return (NULL);
	z = new Zombie(name);
	return (z);
}

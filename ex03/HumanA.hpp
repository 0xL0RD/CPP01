/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 15:04:32 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/12 16:23:09 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
	public:
		void		attack(void) const;
		void		setWeapon(Weapon &weapon);
		HumanA(std::string name, Weapon &weapon);

	private:
		Weapon		&_weapon;
		std::string	_name;
};

#endif

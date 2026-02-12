/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:47:24 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/12 12:41:30 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
public:
	void		name_set(std::string name);
	Zombie(void);
	~Zombie(void);
	void		announce(void);

private:
	std::string	_name;
};

Zombie* zombieHorde(int N, std::string name);
void	zombieHorde_delete(Zombie *z);

#endif

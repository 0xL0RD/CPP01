/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 14:44:21 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/13 15:47:27 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

enum e_levels
{
	DEBUG = 0,
	INFO,
	WARNING,
	ERROR,
	LEVELS_LEN
};

class Harl
{
	public:
 		void	complain(std::string level); //const

	private:
		void	debug(void);	//const
		void	info(void);		//const
		void	warning(void);	//const
		void	error(void);	//const
};

#endif 

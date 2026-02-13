/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 14:44:21 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/13 16:04:48 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	h;
	std::string	str = "0";

	std::cout << "Complaining as WRONG LEVEL 6: " << std::endl;
	h.complain("6");
	std::cout << std::endl;

	std::cout << "Complaining as DEBUG: " << std::endl;
	str[0] = DEBUG + '0';
	h.complain(str);
	std::cout << std::endl;

	std::cout << "Complaining as INFO: " << std::endl;
	str[0] = INFO + '0';
	h.complain(str);
	std::cout << std::endl;

	std::cout << "Complaining as WARNING: " << std::endl;
	str[0] = WARNING + '0';
	h.complain(str);
	std::cout << std::endl;

	std::cout << "Complaining as ERROR: " << std::endl;
	str[0] = ERROR + '0';
	h.complain(str);
	std::cout << std::endl;

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 14:44:21 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/13 16:34:00 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	h;

	std::cout << "Complaining as WRONG_LEVEL: " << std::endl;
	h.complain("WRONG_LEVEL");
	std::cout << std::endl;

	std::cout << "Complaining as DEBUG: " << std::endl;
	h.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "Complaining as INFO: " << std::endl;
	h.complain("INFO");
	std::cout << std::endl;

	std::cout << "Complaining as WARNING: " << std::endl;
	h.complain("WARNING");
	std::cout << std::endl;

	std::cout << "Complaining as ERROR: " << std::endl;
	h.complain("ERROR");
	std::cout << std::endl;

	return (0);
}

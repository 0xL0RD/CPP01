/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:50:14 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/12 13:10:53 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "[MEMORY ADDRESSES]" << std::endl;
	std::cout << "string ADR: "
		<< &str
		<< std::endl;
	std::cout << "string PTR: "
		<< stringPTR
		<< std::endl;
	std::cout << "string REF: "
		<< &stringREF
		<< std::endl;
	std::cout << std::endl;

	std::cout << "[VALUES]" << std::endl;
	std::cout << "string VAL: "
		<< str
		<< std::endl;
	std::cout << "string PTR: "
		<< *stringPTR
		<< std::endl;
	std::cout << "string REF: "
		<< stringREF
		<< std::endl;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 07:26:40 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/13 08:24:05 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	sd_copyall(
		std::ifstream &in,
		std::ofstream &out
		)
{
	char buff[4096];

	while (1)
	{
		in.read(buff, sizeof(buff));
		if (in == false)
			return (-1);
		if (in.gcount() == 0)
			return (1);
		out.wrire(buff, in.gcount());
	}
	return (-1);
}

int	main(int argc, char *argv[])
{
	std::string	fileIn;
	std::string	fileOut;
	int			r;

	if (argc != 4)
	{
		std::cout << "Usage: "
			<< argv[0] << " "
			<< "file "
			<< "needle "
			<< "replacement "
			<< std::endl;
		return (1);
	}
	fileIn = argv[1];
	std::ifstream in(fileIn, std::ios::in | std::ios::binary);
	if (in.is_open() == false)
	{
		std::cout << '"' << fileIn << '"'
			<< " could not be opened"
			<< std::endl;
		return (1);
	}
	fileOut = fileIn + ".replace";
	std::ofstream out(fileOut, std::ios:out | std::ios::binary);
	if (out.is_open() == false)
	{
		std::cout << "fileout (" << '"' << fileOut << ")" << "'"
			<< " could not be opened"
			<< std::endl;
		in.close();
		return (1);
	}
	if (needle.empty() == true)
	{
		r = sd_copyall(in, out);
		if (r < 0)
		{
			in.close();
			out.close();	//TODO: remove fileOut if error
			return (1);
		}
	}
	return (0);
}

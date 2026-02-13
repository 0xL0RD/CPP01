/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 07:26:40 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/13 10:18:13 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "main.hpp"

int	sd_copyall(
		std::ifstream &in,
		std::ofstream &out
		)
{
	char buff[BUFFER_SIZE];

	while (1)
	{
		in.read(buff, sizeof(buff));
		if (in == false)
			return (-1);
		if (in.gcount() == 0)
			return (1);
		out.write(buff, in.gcount());
	}
	return (-1);
}

int	sb_replaceinstream(
		std::ifstream	&in,
		std::ofstream	&out,
		std::string		&needle,
		std::string		&replacement
		)
{
	char			buff[BUFFER_SIZE];
	std::string		str;
	std::size_t		pos;
	
	str.reserve(BUFFER_SIZE + needle.size());
	while (1)
	{
		in.read(buff, sizeof(buff));
		if (in == false)
			return (-1);
		if (in.gcount() == 0)
			return (1);
		str.append(buff, in.gcount());
		while (1)
		{
			pos = str.find(needle);
			if (pos != std::string::npos)
			{
				out.write(str.data(), pos);
				out.write(replacement.data(), replacement.size());
				str.erase(0, pos + needle.size());
			}
			else
				break ;
		}
		out.write(str.data(), str.size() - (needle.size() - 1));
		str.erase(0, needle.size() - 1);
	}
	out.write(str.data(), str.size());
	return (1);
}

int	main(int argc, char *argv[])
{
	std::string	fileIn;
	std::string	fileOut;
	int			r;
	std::string	needle;
	std::string	replacement;

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
	fileOut = fileIn + ".replace";
	needle = argv[2];
	replacement = argv[3];
	std::ifstream in(fileIn.data(), std::ios::in | std::ios::binary);
	if (in == false)
	{
		std::cout << '"' << fileIn << '"'
			<< " could not be opened"
			<< std::endl;
		return (1);
	}
	std::ofstream out(fileOut.data(), std::ios::out | std::ios::binary);
	if (out == false)
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
	r = sb_replaceinstream(in, out, needle, replacement);
	if (r < 0)
		return (2);
	return (0);
}

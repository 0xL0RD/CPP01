/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 07:26:40 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/13 13:53:37 by rubsanch         ###   ########.fr       */
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
		std::cout << "---------------";
		in.read(buff, sizeof(buff));
		if (in.bad() == true)
			return (-1);
		if (in.gcount() == 0)
			return (1);
		out.write(buff, in.gcount());
	}
	return (-2);
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
	
	if (needle.size() >= BUFFER_SIZE)
	{
		std::cout << "needle.size() can not be equal or greater than "
			<< BUFFER_SIZE << " (BUFFER_SIZE)"
			<< std::endl;
		return (-1);
	}
	str.reserve(BUFFER_SIZE + needle.size());
	while (1)
	{
		std::cout << "---------------" << std::endl;
		in.read(buff, sizeof(buff));
		if (in.bad() == true)
			return (-1);
		//if (in.gcount() == 0) //TODO: change to .eofbit
		//if (in.eof() == true)
			//return (1);
		str.append(buff, in.gcount());
		while (1)
		{
			std::cout << "---------------" << std::endl;
			if (str.size() < needle.size())
				break ;
			pos = str.find(needle);
			if (pos != std::string::npos)
			{
				out.write(str.data(), pos);
				std::cout << "w1: ";
				std::cout.write(str.data(), pos);
				std::cout << std::endl;
				std::cout << "---------------" << std::endl;
				out.write(replacement.data(), replacement.size());
				std::cout << "w2: ";
				std::cout.write(replacement.data(), replacement.size());
				std::cout << std::endl;
				std::cout << "---------------" << std::endl;
				str.erase(0, pos + needle.size());
			}
			else
				break ;
		}
		if (str.size() < needle.size())
			break ;
		std::cout << "str_size: " << str.size() << std::endl;
		out.write(str.data(), str.size() - (needle.size() - 1));
		std::cout << "str_size: " << str.size() << std::endl;
		std::cout << "w3: " << str.size() << ": ";
		std::cout.write(str.data(), str.size() - (needle.size() - 1));
		std::cout << std::endl;
		std::cout << "---------------" << std::endl;
		std::cout << "s0: ";
		std::cout.write(str.data(), str.size());
		std::cout << std::endl;
		std::cout << "---------------" << std::endl;
		str.erase(0, str.size() - (needle.size() - 1));
		std::cout << "s1: ";
		std::cout.write(str.data(), str.size());
		std::cout << std::endl;
		std::cout << "---------------" << std::endl;
		if (in.eof() == true)
			break ;
	}
	out.write(str.data(), str.size());
	std::cout << "w4: ";
	std::cout.write(str.data(), str.size());
	std::cout << std::endl;
	std::cout << "---------------" << std::endl;
	return (1);
}

int	main(int argc, char *argv[])
{
	std::string		fileIn;
	std::string		fileOut;
	int				r;
	std::string		needle;
	std::string		replacement;
	std::ifstream	in;
	std::ofstream	out;

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
	in.open(fileIn.c_str(), std::ios::binary);
	if (in == false)
	{
		std::cout << '"' << fileIn << '"'
			<< " could not be opened"
			<< std::endl;
		return (1);
	}
	out.open(fileOut.c_str(), std::ios::binary);
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
			std::cout << "[ERROR] NO needle copying failed" << std::endl;
			in.close();
			out.close();
			return (1);
		}
		in.close();
		out.close();
		return (0);
	}
	r = sb_replaceinstream(in, out, needle, replacement);
	if (r < 0)
	{
		std::cout << "[ERROR] Replacement failed" << std::endl;
		return (2);
	}
	return (0);
}

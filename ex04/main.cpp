/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:12:02 by tkirihar          #+#    #+#             */
/*   Updated: 2022/01/28 15:26:16 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	replace(std::string file_name, std::string s1, std::string s2)
{
	std::ifstream	fin(file_name);
	if (fin.fail())
	{
		std::cout << "Failed to open " << file_name << "." << std::endl;
		return ;
	}
	std::ofstream	fout(file_name + ".replace");
	if (fout.fail())
	{
		std::cout << "Failed to open " << file_name << ".replace." << std::endl;
		return ;
	}
	std::string	line;
	size_t s1_len = s1.size();
	size_t replace_position;
	while (!fin.eof())
	{
		std::getline(fin, line);
		while (1)
		{
			replace_position = line.find(s1);
			if (replace_position == std::string::npos)
				break ;
			line.erase(replace_position, s1_len);
			line.insert(replace_position, s2);
		}
		fout << line << std::endl;
	}
	fin.close();
	fout.close();
	return ;
}

int	main(void)
{
	replace("test1.txt", "abc", "ABC");
	replace("test2.txt", " ", "*");
	replace("test3.txt", "<new line>", "\n");
	return (0);
}

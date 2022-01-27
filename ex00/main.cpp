/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:20:29 by tkirihar          #+#    #+#             */
/*   Updated: 2022/01/27 16:06:47 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

void randomChump(std::string name);
Zombie* newZombie(std::string zombie_name);

int	main(void)
{
	Zombie *steve = newZombie("Steve");
	if (steve == NULL)
		return (0);
	steve->announce();
	randomChump("Tom");
	delete steve;
}
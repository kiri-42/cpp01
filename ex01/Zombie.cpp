/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:21:02 by tkirihar          #+#    #+#             */
/*   Updated: 2022/01/27 16:38:30 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string zombie_name)
{
	name = zombie_name;
}

Zombie::~Zombie()
{
	std::cout << "Deleted " << name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << " BraiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setZombie(std::string zombie_name)
{
	name = zombie_name;
}

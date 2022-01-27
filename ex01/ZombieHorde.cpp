/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:19:51 by tkirihar          #+#    #+#             */
/*   Updated: 2022/01/27 16:32:24 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
	Zombie* new_zombies = new Zombie[n];
	if (new_zombies == NULL)
	{
		std::cout << "Failed to create a zombie group." << std::endl;
		return (NULL);
	}
	for (int i = 0; i < n; i++)
	{
		new_zombies[i].setZombie(name);
	}
	return (new_zombies);
}
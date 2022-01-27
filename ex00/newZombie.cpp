/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:21:39 by tkirihar          #+#    #+#             */
/*   Updated: 2022/01/27 16:10:05 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* newZombie(std::string zombie_name)
{
	Zombie* new_zombie = new Zombie(zombie_name);
	if (new_zombie == NULL)
	{
		std::cout << "Failed to create a zombie." << std::endl;
		return (NULL);
	}
	return (new_zombie);
}
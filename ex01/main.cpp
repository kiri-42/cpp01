/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:19:58 by tkirihar          #+#    #+#             */
/*   Updated: 2022/01/27 16:39:49 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name);

int	main(void)
{
	Zombie *zombies = zombieHorde(5, "zombies");
	if (zombies == NULL)
		return (0);
	for (size_t i = 0; i < 5; i++)
	{
		zombies[i].announce();
	}
	delete[] zombies;
	return (0);
}
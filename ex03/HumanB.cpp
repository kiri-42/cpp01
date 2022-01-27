/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:24:59 by tkirihar          #+#    #+#             */
/*   Updated: 2022/01/28 00:54:49 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void	HumanB::attack()
{
	if (club->getType().empty())
		std::cout << name << " has no weapon" << std::endl;
	else
		std::cout << name << " attacks with his " << club->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon & club)
{
	this->club = &club;
}
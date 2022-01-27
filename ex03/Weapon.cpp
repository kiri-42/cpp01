/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:24:55 by tkirihar          #+#    #+#             */
/*   Updated: 2022/01/28 01:13:55 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon()
{
}

Weapon::Weapon(std::string name)
{
	this->name = name;
}

const std::string	&Weapon::getType()
{
	const std::string	&ret = this->name;
	return ret;
}

void	Weapon::setType(std::string name)
{
	this->name = name;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:32:05 by tkirihar          #+#    #+#             */
/*   Updated: 2022/01/28 15:43:02 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::complain(std::string level)
{
	void	(Karen::*pfunc)();
	pfunc = NULL;
	(level == "DEBUG") ? pfunc = &Karen::debug : 0;
	(level == "INFO") ? pfunc = &Karen::info : 0;
	(level == "WARNING") ? pfunc = &Karen::warning : 0;
	(level == "ERROR") ? pfunc = &Karen::error : 0;
	(pfunc != NULL) ? (this->*pfunc)() : (void)0;
	return ;
}

void	Karen::debug()
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info()
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
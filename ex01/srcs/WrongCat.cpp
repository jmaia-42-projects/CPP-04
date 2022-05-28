/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:30:36 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 19:07:38 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat: Default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &obj):	WrongAnimal(obj)
{
	std::cout << "WrongCat: Copy constructor called" << std::endl;
	*this = obj;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat: Destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &obj)
{
	std::cout << "WrongCat: Assignment operator called" << std::endl;
	WrongAnimal::operator=(obj);
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meooow !" << std::endl;
}

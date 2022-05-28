/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 21:22:59 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 22:51:58 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#include <iostream>

AMateria::AMateria(void)
{
	std::cout << "AMateria: Default constructor called" << std::endl;
	this->type = "";
}

AMateria::AMateria(std::string type)
{
	std::cout << "AMateria: Constructor with type called" << std::endl;
	this->type = type;
}

AMateria::AMateria(AMateria const &obj)
{
	std::cout << "AMateria: Copy constructor called" << std::endl;
	*this = obj;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria: Destructor called" << std::endl;
}

AMateria	&AMateria::operator=(AMateria const &obj)
{
	this->type = obj.type;
	return (*this);
}

std::string const	&AMateria::getType(void) const
{
	return (this->type);
}

void	AMateria::use(ICharacter &target)
{
	(void) target;
}

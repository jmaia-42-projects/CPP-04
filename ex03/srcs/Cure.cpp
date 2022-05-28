/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 21:31:10 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 22:42:00 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

#include <iostream>

Cure::Cure(void):	AMateria("cure")
{
	std::cout << "Cure: Default constructor called" << std::endl;
}

Cure::Cure(Cure const &obj):	AMateria("cure")
{
	std::cout << "Cure: Copy constructor called" << std::endl;
	*this = obj;
}

Cure::~Cure(void)
{
	std::cout << "Cure: Destructor called" << std::endl;
}

Cure	&Cure::operator=(Cure const &obj)
{
	std::cout << "Cure: Assignment operator called" << std::endl;
	(void) obj;
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

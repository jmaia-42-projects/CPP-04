/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 21:31:10 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 22:41:53 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

#include <iostream>

Ice::Ice(void):	AMateria("ice")
{
	std::cout << "Ice: Default constructor called" << std::endl;
}

Ice::Ice(Ice const &obj):	AMateria("ice")
{
	std::cout << "Ice: Copy constructor called" << std::endl;
	*this = obj;
}

Ice::~Ice(void)
{
	std::cout << "Ice: Destructor called" << std::endl;
}

Ice	&Ice::operator=(Ice const &obj)
{
	std::cout << "Ice: Assignment operator called" << std::endl;
	(void) obj;
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

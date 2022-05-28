/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:30:36 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 19:40:24 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

#include <iostream>

AAnimal::AAnimal(void)
{
	std::cout << "AAnimal: Default constructor called" << std::endl;
	this->type = "AAnimal";
}

AAnimal::AAnimal(AAnimal const &obj)
{
	std::cout << "AAnimal: Copy constructor called" << std::endl;
	*this = obj;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal: Destructor called" << std::endl;
}

AAnimal	&AAnimal::operator=(AAnimal const &obj)
{
	std::cout << "AAnimal: Assignment operator called" << std::endl;
	this->type = obj.type;
	return (*this);
}

std::string	AAnimal::getType(void) const
{
	return (this->type);
}

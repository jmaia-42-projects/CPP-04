/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:30:36 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 18:54:50 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#include <iostream>

Animal::Animal(void)
{
	std::cout << "Animal: Default constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(Animal const &obj)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
	*this = obj;
}

Animal::~Animal(void)
{
	std::cout << "Animal: Destructor called" << std::endl;
}

Animal	&Animal::operator=(Animal const &obj)
{
	std::cout << "Animal: Assignment operator called" << std::endl;
	this->type = obj.type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "¡Hola amigos! Soy un animal básico." << std::endl;
}

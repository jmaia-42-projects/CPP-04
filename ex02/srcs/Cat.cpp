/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:30:36 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 19:29:13 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>

Cat::Cat(void)
{
	std::cout << "Cat: Default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const &obj):	Animal(obj)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	*this = obj;
}

Cat::~Cat(void)
{
	std::cout << "Cat: Destructor called" << std::endl;
	delete this->brain;
}

Cat	&Cat::operator=(Cat const &obj)
{
	std::cout << "Cat: Assignment operator called" << std::endl;
	Animal::operator=(obj);
	this->brain = new Brain(*obj.brain);
	return (*this);
}

Brain	*Cat::getBrain(void) const
{
	return (this->brain);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meooow !" << std::endl;
}

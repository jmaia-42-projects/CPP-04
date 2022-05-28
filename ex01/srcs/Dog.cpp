/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:30:36 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 19:25:10 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream>

Dog::Dog(void)
{
	std::cout << "Dog: Default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(Dog const &obj):	Animal(obj)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	*this = obj;
}

Dog::~Dog(void)
{
	std::cout << "Dog: Destructor called" << std::endl;
	delete this->brain;
}

Dog	&Dog::operator=(Dog const &obj)
{
	std::cout << "Dog: Assignment operator called" << std::endl;
	Animal::operator=(obj);
	this->brain = obj.brain;
	return (*this);
}

Brain	*Dog::getBrain(void) const
{
	return (this->brain);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof Woof !" << std::endl;
}

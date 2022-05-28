/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:18:44 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 19:32:14 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <iostream>

Brain::Brain(void)
{
	std::cout << "Brain: Default constructor called" << std::endl;
}

Brain::Brain (Brain const &obj)
{
	std::cout << "Brain: Copy constructor called" << std::endl;
	*this = obj;
}

Brain::~Brain(void)
{
	std::cout << "Brain: Destructor called" << std::endl;
}

Brain	&Brain::operator=(Brain const &obj)
{
	std::cout << "Brain: Assignment operator called" << std::endl;
	for (int i = 0; i < (int) sizeof(this->ideas) / (int) sizeof(this->ideas[0]); i++)
		this->ideas[i] = obj.ideas[i];
	return (*this);
}

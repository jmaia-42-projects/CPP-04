/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 21:41:33 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 23:45:50 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

#include <iostream>

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource: Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->knowledge[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const &obj)
{
	std::cout << "MateriaSource: Copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->knowledge[i] = 0;
	*this = obj;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource: Destructor called" << std::endl;
	for (int i = 0; i < 4 && this->knowledge[i]; i++)
		delete this->knowledge[i];
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &obj)
{
	std::cout << "MateriaSource: Assignment operator called" << std::endl;
	for (int i = 0; i < 4 && this->knowledge[i]; i++)
		delete this->knowledge[i];
	for (int i = 0; i < 4; i++)
		this->knowledge[i] = obj.knowledge[i] ? obj.knowledge[i]->clone() : 0;
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	int	iEmptySlot;

	iEmptySlot = 0;
	for (; iEmptySlot < 4 && this->knowledge[iEmptySlot]; iEmptySlot++)
		;
	if (iEmptySlot == 4)
		return ;
	this->knowledge[iEmptySlot] = materia->clone();
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4 && this->knowledge[i]; i++)
		if (this->knowledge[i]->getType() == type)
			return (this->knowledge[i]->clone());
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 21:26:57 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 23:44:44 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

#include <iostream>

Character::Character(void):	name("")
{
	std::cout << "Character: Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
	this->groundSize = 10;
	this->ground = new AMateria*[this->groundSize];
	for (int i = 0; i < this->groundSize; i++)
		this->ground[i] = 0;
}

Character::Character(std::string name): name(name)
{
	std::cout << "Character: Constructor with name called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
	this->groundSize = 10;
	this->ground = new AMateria*[this->groundSize];
	for (int i = 0; i < this->groundSize; i++)
		this->ground[i] = 0;
}

Character::Character(Character const &obj)
{
	std::cout << "Character: Copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
	this->groundSize = 0;
	this->ground = 0;
	*this = obj;
}

Character::~Character(void)
{
	std::cout << "Character: Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->inventory[i];
	for (int i = 0; i < this->groundSize && this->ground[i]; i++)
		delete this->ground[i];
	delete[] this->ground;
}

Character	&Character::operator=(Character const &obj)
{
	std::cout << "Character: Assignment operator called" << std::endl;
	this->name = obj.name;
	for (int i = 0; i < 4; i++)
		delete this->inventory[i];
	for (int i = 0; i < 4; i++)
		this->inventory[i] = obj.inventory[i] ? obj.inventory[i]->clone() : 0;
	for (int i = 0; i < this->groundSize && this->ground[i]; i++)
		delete this->ground[i];
	delete[] this->ground;
	this->ground = new AMateria*[this->groundSize];
	for (int i = 0; i < this->groundSize; i++)
		this->ground[i] = obj.ground[i] ? obj.ground[i]->clone() : 0;
	return (*this);
}

std::string const	Character::getName(void) const
{
	return (this->name);
}

void	Character::equip(AMateria *m)
{
	int	iEmptySlot;

	iEmptySlot = 0;
	for (; iEmptySlot < 4 && inventory[iEmptySlot]; iEmptySlot++)
		;
	if (iEmptySlot == 4)
		return ;
	this->inventory[iEmptySlot] = m;
}

void	Character::unequip(int idx)
{
	this->dropToGround(this->inventory[idx]);
	this->inventory[idx] = 0;
}

void	Character::dropToGround(AMateria *materia)
{
	int			iEmptySlot;
	AMateria	**newGround;

	iEmptySlot = 0;
	for (; iEmptySlot < this->groundSize && this->ground[iEmptySlot]; iEmptySlot++)
		;
	if (iEmptySlot == this->groundSize)
	{
		newGround = new AMateria*[this->groundSize * 2];
		for (int i = 0; i < this->groundSize; i++)
			newGround[i] = this->ground[i];
		for (int i = this->groundSize; i < this->groundSize * 2; i++)
			newGround[i] = 0;
		this->ground = newGround;
	}
	this->ground[iEmptySlot] = materia;
}

void	Character::use(int idx, ICharacter &target)
{
	if (!this->inventory[idx])
		return ;
	this->inventory[idx]->use(target);
}

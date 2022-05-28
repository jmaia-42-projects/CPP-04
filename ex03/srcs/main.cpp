/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 21:20:28 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 23:47:04 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"

int	main(void)
{
	MateriaSource	*src;
	ICharacter		*me;
	Character		*meChild;
	AMateria		*tmp;
	ICharacter		*bob;

	src = new MateriaSource();
	tmp = new Ice();
	src->learnMateria(tmp);
	delete tmp;
	tmp = new Cure();
	src->learnMateria(tmp);
	delete tmp;

	meChild = new Character("me");
	me = meChild;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(2);

	MateriaSource	*src2;

	src2 = new MateriaSource(*src);

	ICharacter		*me2;

	me2 = new Character(*meChild);

	delete bob;
	delete me;
	delete me2;
	delete src;
	delete src2;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:25:24 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 18:58:37 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

int	main(void)
{
	{
		Animal const	*meta;
		Animal const	*j;
		Animal const	*i;

		meta = new Animal();
		j = new Dog();
		i = new Cat();
		std::cout << j->getType() << std::endl;
		std::cout << i->getType() << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete j;
		delete i;
	}

	std::cout << "### WRONG ###" << std::endl;
	{
		WrongAnimal const	*wAnimal;
		WrongAnimal const	*wCat;

		wAnimal = new WrongAnimal();
		wCat = new WrongCat();

		wAnimal->makeSound();
		wCat->makeSound();

		delete wAnimal;
		delete wCat;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:25:24 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 19:38:52 by jmaia            ###   ########.fr       */
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
//		Animal const	*meta; // This does not work anymore
		Animal const	*j;
		Animal const	*i;

//		meta = new Animal(); // This does not work anymore
		j = new Dog();
		i = new Cat();
		std::cout << j->getType() << std::endl;
		std::cout << i->getType() << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
//		meta->makeSound(); // This does not work anymore

//		delete meta; // This does not work anymore
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

	Animal	*animals[10];

	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();
	for (int i = 5; i < 10; i++)
		animals[i] = new Cat();

	{
		Cat	testDeepCopy;
		Cat	copy(testDeepCopy);

		std::cout << "Address of testDeepCopy = " << &testDeepCopy << std::endl;
		std::cout << "Address of its brain = " << testDeepCopy.getBrain() << std::endl;

		std::cout << "Address of copy = " << &copy << std::endl;
		std::cout << "Address of its brain = " << copy.getBrain() << std::endl;
	}

	for (int i = 0; i < 10; i++)
		delete animals[i];
}

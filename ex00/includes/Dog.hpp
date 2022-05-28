/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:22:00 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 18:51:26 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog:	public Animal
{
	public:
		Dog(void);
		Dog(Dog const &obj);
		~Dog(void);

		Dog	&operator=(Dog const &obj);

		void	makeSound(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:22:00 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 19:41:24 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Dog:	public AAnimal
{
	private:
		Brain	*brain;
	public:
		Dog(void);
		Dog(Dog const &obj);
		~Dog(void);

		Dog	&operator=(Dog const &obj);

		Brain	*getBrain(void) const;

		void	makeSound(void) const;
};

#endif

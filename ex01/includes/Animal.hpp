/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:08:10 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 19:28:58 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class	Animal
{
	protected:
		std::string	type;
	public:
		Animal(void);
		Animal(Animal const &obj);
		virtual ~Animal(void);

		Animal	&operator=(Animal const &obj);

		std::string			getType(void) const;
		virtual void		makeSound(void) const;
};

#endif

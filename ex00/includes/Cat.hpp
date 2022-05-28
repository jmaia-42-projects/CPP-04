/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:22:00 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 18:51:22 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat:	public Animal
{
	public:
		Cat(void);
		Cat(Cat const &obj);
		~Cat(void);

		Cat	&operator=(Cat const &obj);

		void	makeSound(void) const;
};

#endif

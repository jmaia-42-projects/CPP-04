/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:22:00 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 19:40:57 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Cat:	public AAnimal
{
	private:
		Brain	*brain;
	public:
		Cat(void);
		Cat(Cat const &obj);
		~Cat(void);

		Cat	&operator=(Cat const &obj);

		Brain	*getBrain(void) const;

		void	makeSound(void) const;
};

#endif

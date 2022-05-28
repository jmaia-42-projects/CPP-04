/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:08:10 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 19:40:05 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>

class	AAnimal
{
	protected:
		std::string	type;
	public:
		AAnimal(void);
		AAnimal(AAnimal const &obj);
		virtual ~AAnimal(void);

		AAnimal	&operator=(AAnimal const &obj);

		std::string			getType(void) const;
		virtual void		makeSound(void) const = 0;
};

#endif

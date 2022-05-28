/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:51:50 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 23:03:50 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

class	AMateria;

# include "ICharacter.hpp"

class	AMateria
{
	protected:
		std::string	type;
	public:
		AMateria(void);
		AMateria(std::string type);
		AMateria(AMateria const &obj);
		virtual ~AMateria(void);

		virtual AMateria	&operator=(AMateria const &obj);

		std::string const	&getType(void) const;

		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);
};

#endif

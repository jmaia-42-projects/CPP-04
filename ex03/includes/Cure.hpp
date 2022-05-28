/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 20:04:34 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 22:41:41 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class	Cure:	public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &obj);
		~Cure(void);

		Cure	&operator=(Cure const &obj);

		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};

#endif

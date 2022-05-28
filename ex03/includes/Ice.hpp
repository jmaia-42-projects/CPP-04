/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 20:04:34 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 22:40:58 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class	Ice:	public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &obj);
		~Ice(void);

		Ice	&operator=(Ice const &obj);

		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};

#endif

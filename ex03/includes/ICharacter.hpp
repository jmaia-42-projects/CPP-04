/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:54:59 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 22:03:42 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <string>

class	ICharacter;
# include "AMateria.hpp"

class	ICharacter
{
	public:
		virtual						~ICharacter() {}
		virtual std::string const 	getName(void) const = 0;
		virtual void 				equip(AMateria *m) = 0;
		virtual void 				unequip(int idx) = 0;
		virtual void 				use(int idx, ICharacter &target) = 0;
};

#endif

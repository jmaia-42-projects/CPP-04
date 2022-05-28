/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 20:02:14 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 23:04:53 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>

# include "ICharacter.hpp"

class	Character:	public ICharacter
{
	private:
		std::string	name;
		AMateria	*inventory[4];
		AMateria	**ground;
		int			groundSize;
		void		dropToGround(AMateria *materia);
	public:
		Character(void);
		Character(std::string name);
		Character(Character const &obj);
		~Character(void);

		Character	&operator=(Character const &obj);

		std::string const	getName(void) const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
};

#endif

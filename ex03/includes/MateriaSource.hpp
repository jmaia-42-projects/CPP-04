/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 21:18:19 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 22:38:51 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class	MateriaSource:	public IMateriaSource
{
	private:
		AMateria	*knowledge[4];
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &obj);
		~MateriaSource(void);

		MateriaSource	&operator=(MateriaSource const &obj);

		void		learnMateria(AMateria *materia);
		AMateria	*createMateria(std::string const &type);
};

#endif

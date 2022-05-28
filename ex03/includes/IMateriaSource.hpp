/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:58:02 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 22:46:50 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <string>

# include "AMateria.hpp"

class	IMateriaSource
{
	public:
		virtual 			~IMateriaSource() {}
		virtual void		learnMateria(AMateria *materia) = 0;
		virtual AMateria	*createMateria(std::string const &type) = 0;
};

#endif

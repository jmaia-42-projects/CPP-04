/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:59:07 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 19:19:18 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class	Brain
{
	public:
		std::string	ideas[100];

		Brain(void);
		Brain(Brain const &obj);
		~Brain(void);

		Brain	&operator=(Brain const &obj);
};

#endif

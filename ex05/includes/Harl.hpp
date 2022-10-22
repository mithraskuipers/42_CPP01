/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/21 21:13:30 by mkuipers      #+#    #+#                 */
/*   Updated: 2022/10/22 10:39:00 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include "./../includes/Libraries.hpp"

class Harl
{
	public:
		Harl();
		~Harl();
		void    complain(std::string level);
	private:
		void    debug(void);
		void    info(void);
		void    warning(void);
		void    error(void);
};

typedef void 	(Harl::*function_p)(void);
int				getLevel(std::string level);

#endif

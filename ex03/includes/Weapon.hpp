/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/15 16:20:54 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/22 10:32:31 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	public:
		Weapon(std::string type): _type(type) {};
		~Weapon() {};
		std::string	const &getType(void);
		void		setType(std::string updated_type);

	private:
		std::string	_type;
};

#endif

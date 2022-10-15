/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/15 16:20:54 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/15 17:22:17 by mikuiper      ########   odam.nl         */
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
		std::string	const &getType(void) const;
		void		setType(std::string updated_type);

	private:
		std::string	_type;
};

#endif
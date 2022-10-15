/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/15 16:52:23 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/15 17:14:29 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "../includes/Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name): _name(name), _weapon(NULL) {};
		~HumanB() {};
		void	setWeapon(Weapon &weapon);
		void	attack(void) const;
	private:
		std::string const	_name;
		Weapon				*_weapon;
			
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 12:49:30 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/14 13:12:52 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		Zombie(std::string name);
		void	announce( void );
	private: 
		const	std::string	_name;
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 12:49:30 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/14 15:11:38 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce(void) const;
		void	update_name(std::string update_name);
	private: 
		const	std::string	_name;
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);
Zombie*	zombieHorde(int N, std::string name);

#endif

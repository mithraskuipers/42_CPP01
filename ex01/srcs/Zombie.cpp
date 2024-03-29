/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 13:03:15 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/15 16:10:15 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->_name << " " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
	announce();
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << this->_name << ": has returned to its grave" << std::endl;
}

void	Zombie::update_name(std::string update_name)
{
	this->_name = update_name;
}

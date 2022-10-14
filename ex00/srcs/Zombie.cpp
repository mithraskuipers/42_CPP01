/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 13:03:15 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/14 13:39:39 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
├─sda1   8:1    0    50M  0 part 
├─sda2   8:2    0   223G  0 part 
└─sda3   8:3    0   509M  0 part 

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
	std::cout << "The zombie named " << this->_name << " has returned to its grave" << std::endl;
}
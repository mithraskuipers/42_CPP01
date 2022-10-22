/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NewZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 13:03:31 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/22 10:28:07 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	return (new Zombie(name));
}

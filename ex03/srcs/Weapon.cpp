/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/15 16:17:10 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/15 17:01:20 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string	const	&Weapon::getType(void) const
{
	return (this->_type);
}

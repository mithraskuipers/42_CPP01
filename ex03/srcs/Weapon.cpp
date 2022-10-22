/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/15 16:17:10 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/22 10:33:13 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string	const	&Weapon::getType(void)
{
	return (this->_type);
}

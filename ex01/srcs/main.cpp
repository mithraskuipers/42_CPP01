/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 12:35:46 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/14 15:03:43 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie	*zombieHordeArray;

	zombieHordeArray = zombieHorde(11, "zombie horde string");
	delete [] zombieHordeArray;
	return (0);
}

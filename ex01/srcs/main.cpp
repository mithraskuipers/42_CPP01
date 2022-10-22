/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 12:35:46 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/22 10:29:59 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie	*zombieHordeArray;

	zombieHordeArray = zombieHorde(11, "super unique zombie");
	std::cout << std::endl;
	delete [] zombieHordeArray;
	return (0);
}

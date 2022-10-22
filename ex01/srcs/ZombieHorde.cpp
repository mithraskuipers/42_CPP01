/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 13:03:31 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/22 10:29:35 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie*	ZombieHorde(int N, std::string name)
{
	Zombie	*zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombieHorde[i].update_name(name + " " + std::to_string(i + 1));
		zombieHorde[i].announce();
	}
	return (&(zombieHorde[0]));
}

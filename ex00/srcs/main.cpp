/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 12:35:46 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/22 10:27:52 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie stack_zombie("stack_zombie");
	Zombie *heap_zombie = newZombie("heap_zombie");

	randomChump("randomchump_zombie");
	delete (heap_zombie);
	return (0);
}

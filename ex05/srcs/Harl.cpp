/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/21 15:57:10 by mkuipers      #+#    #+#                 */
/*   Updated: 2022/10/21 21:43:07 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/Libraries.hpp"
#include "./../includes/Harl.hpp"

Harl::Harl()
{
	return ;
}

Harl::~Harl()
{
	return ;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int	getLevel(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int					levelNumber = 4;

	for (int i = 0; i < 4 && levelNumber == 4; i++)
	{
		if (level == levels[i])
			levelNumber = i;
	}
	return (levelNumber);
}

void	Harl::complain(std::string level)
{
	const function_p	complains[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int					levelNumber = getLevel(level);

	if (levelNumber < 4)
		(this->*(complains[levelNumber]))();
	else
		std::cout << "[ INVALID ]\nInvalid level. Try again." << std::endl << std::endl;
}
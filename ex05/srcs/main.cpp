/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/21 13:00:04 by mkuipers      #+#    #+#                 */
/*   Updated: 2022/10/21 21:19:29 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "./../includes/Harl.hpp"
# include "./../includes/Libraries.hpp"

int	main(void)
{
	Harl	Harl;

	Harl.complain("DEBUG");
	Harl.complain("INFO");
	Harl.complain("WARNING");
	Harl.complain("ERROR");
	return (0);
}

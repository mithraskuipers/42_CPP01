/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 12:35:46 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/10/15 13:02:55 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	// Declare and Assign strings
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;
	
	// Print the memory addresses of above strings
	std::cout << "string's MEM ADDRESS:\t\t\t" << &string << std::endl;
	std::cout << "stringPTR's MEM ADDRESS:\t\t" << stringPTR << std::endl;
	std::cout << "stringREF's MEM ADDRESS:\t\t" << &stringREF << std::endl;

	// Print the contents of the memory addresses of above strings
	std::cout << "CONTENT of string's MEM ADDRESS:\t" << string << std::endl;
	std::cout << "CONTENT of stringPTR's MEM ADDRESS:\t" << *stringPTR << std::endl;
	std::cout << "CONTENT of stringREF's MEM ADDRESS::\t" << stringREF << std::endl;	
	std::cout << std::endl;
	return (0);
}

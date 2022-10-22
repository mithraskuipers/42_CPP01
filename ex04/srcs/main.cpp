/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/21 13:00:04 by mkuipers      #+#    #+#                 */
/*   Updated: 2022/10/21 21:08:00 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "./../includes/Libraries.hpp"
# include "./../includes/Prototypes.hpp"

int	main(int argc, char **argv)
{
	std::ifstream	fileStream;
	std::string		appendedLine;

	if (argc == 4)
	{
		if (openFile(argv[1], &fileStream))
			return (1);
		appendedLine = readFile(&fileStream);
		appendedLine = findReplace(appendedLine, argv[2], argv[3]);
		updateFile(argv[1], appendedLine);
		return (0);
	}
	std::cout << "Error. Please use the correct syntax." << std::endl;
	std::cout << "Usage: ./cpp01_ex04 [input file] [string being search for] [replacement string]" << std::endl;
	return (1);
}

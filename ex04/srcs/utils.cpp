/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/21 15:57:10 by mkuipers      #+#    #+#                 */
/*   Updated: 2022/10/21 20:29:05 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/libraries.hpp"

int	openFile(char *fileName, std::ifstream *fileStream)
{
	(*fileStream).open(fileName, std::ifstream::in);
	if ((*fileStream).is_open())
		return (0);
	std::cout << "Error. Could not open provided file." << std::endl;	
	return (1);
}

std::string	readFile(std::ifstream *fileStream)
{
	std::string	line;
	std::string	appendedLine;

	while (getline(*fileStream, line))
	{
		appendedLine.append(line);
		appendedLine.append("\n");
	}
	return (appendedLine);
}

void	updateFile(char *fileName, std::string appendedLine)
{
	std::ofstream	fileStream;
	std::string		fileNameNew;

	fileNameNew = fileName;
	fileNameNew.append(".replace");
	fileStream.open(fileNameNew.c_str(), std::ifstream::out);
	fileStream << appendedLine;
}

std::string	findReplace(std::string appendedLine, std::string find, std::string replace)
{
	int	locationIndex = 0;

	for (int locationStart = 0; (locationIndex = appendedLine.find(find, locationStart)) != -1; locationStart++)
	{
		appendedLine.erase(locationIndex, find.size());
		appendedLine.insert(locationIndex, replace);
	}
	return (appendedLine);
}

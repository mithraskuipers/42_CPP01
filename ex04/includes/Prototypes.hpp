/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   prototypes.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkuipers <mkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/21 15:57:44 by mkuipers      #+#    #+#                 */
/*   Updated: 2022/10/21 20:31:12 by mkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

int         openFile(char *fileName, std::ifstream *fileStream);
std::string findReplace(std::string appendedLine, std::string find, std::string replace);
std::string readFile(std::ifstream *fileStream);
void        updateFile(char *fileName, std::string appendedLine);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 17:41:51 by root              #+#    #+#             */
/*   Updated: 2025/09/21 15:23:32 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	int i = 0;
	std::string string;
	while (i < 100)
	{
		ideas[i++] = "";
	}
	std::cout << "Brain constructor called\n";
}

Brain::Brain(Brain &other)
{
	if (this != &other)
	{
		int i = 0;
		while (i < 100)
		{
			this->ideas[i] = other.ideas[i];
			i++;
		}
	}
}

Brain &Brain::operator=(Brain &other)
{
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = other.ideas[i];
		i++;
	}
	return (*this);	
}

Brain::~Brain()
{
	std::cout << "Brain destructor called\n";
}

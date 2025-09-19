/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 17:41:51 by root              #+#    #+#             */
/*   Updated: 2025/09/19 18:45:16 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called\n";
}

Brain::Brain(Brain &other)
{
	*this = other;
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

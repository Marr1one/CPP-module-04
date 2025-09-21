/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 21:48:30 by root              #+#    #+#             */
/*   Updated: 2025/09/21 16:52:55 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor called\n";
	type = "Cat";
	_brain = new Brain;
}

Cat::~Cat()
{
		std::cout << "Cat destructor called\n";
		delete _brain;
}

Cat::Cat(Cat &other)
{
	*this = other;
}

Cat &Cat::operator=(Cat &other)
{
	if (this != &other)
	{
		this->type = other.type;
		_brain = new Brain(*other._brain);
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meawwwwww\n";
}
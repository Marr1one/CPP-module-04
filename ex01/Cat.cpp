/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 21:48:30 by root              #+#    #+#             */
/*   Updated: 2025/09/19 17:02:46 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor called\n";
	type = "Cat";
}

Cat::~Cat()
{
		std::cout << "Cat destructor called\n";
}

Cat::Cat(Cat &other)
{
	*this = other;
}

Cat &Cat::operator=(Cat &other)
{
	this->type = other.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meawwwwww\n";
}
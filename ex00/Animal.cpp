/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 21:56:40 by root              #+#    #+#             */
/*   Updated: 2025/09/16 19:55:40 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal(void)
{
}

Animal::~Animal(void)
{
}

Animal::Animal(Animal &other)
{
	*this = other;
}

Animal &Animal::operator=(Animal &other)
{
	this->type = other.type;
	return (*this);
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "Unknown sound...\n";
}	
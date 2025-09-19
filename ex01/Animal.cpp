/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 21:56:40 by root              #+#    #+#             */
/*   Updated: 2025/09/19 17:03:23 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal(void)
{
	std::cout << "Animal constructor called\n";
	this->type = "unknown";
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called\n";
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 21:46:44 by root              #+#    #+#             */
/*   Updated: 2025/09/21 16:53:00 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog constructor called\n";
	this->type = "Dog";
	_brain = new Brain();
}


Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
	delete _brain;
}

Dog::Dog(Dog &other)
{
	*this = other;
}

Dog &Dog::operator=(Dog &other)
{
	if (this != &other)
	{
		this->type = other.type;
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}


void Dog::makeSound() const
{
	std::cout << "WOUF WOUF WOUF\n";
}
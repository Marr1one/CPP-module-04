/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 21:46:44 by root              #+#    #+#             */
/*   Updated: 2025/09/16 19:56:17 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
}


Dog::~Dog()
{
}

Dog::Dog(Dog &other)
{
	*this = other;
}

Dog &Dog::operator=(Dog &other)
{
	this->type = other.type;
	return (*this);
}


void Dog::makeSound() const
{
	std::cout << "WOUF WOUF WOUF\n";
}
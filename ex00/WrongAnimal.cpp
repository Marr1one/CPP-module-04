/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:41:45 by maissat           #+#    #+#             */
/*   Updated: 2025/09/18 17:03:34 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal &other)
{
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &other)
{
	this->_type = other._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wront animal SOUND\n";
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}


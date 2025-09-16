/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 21:56:40 by root              #+#    #+#             */
/*   Updated: 2025/08/01 16:49:47 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal(void)
{
	std::cout << "Animal constructor called\n";
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called\n";
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	if (this->type == "Dog")
		std::cout << "WAFF WAFF\n";
	else if (this->type == "Cat")
		std::cout << "MIAW MIAW\n";
}	
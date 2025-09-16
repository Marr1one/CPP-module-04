/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 21:56:40 by root              #+#    #+#             */
/*   Updated: 2025/08/01 02:23:35 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal(void)
{
}

Animal::~Animal(void)
{
	
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
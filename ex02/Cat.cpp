/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 21:48:30 by root              #+#    #+#             */
/*   Updated: 2025/08/02 17:22:09 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor called\n";
	this->type = "Cat";
	_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
	delete _brain;
}

void Cat::makeSound() const
{
	std::cout << "MIAW MIAW\n";
}
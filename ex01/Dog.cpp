/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 21:46:44 by root              #+#    #+#             */
/*   Updated: 2025/08/01 17:46:03 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog constructor called\n";
	_brain = new Brain();
	this->type = "Dog";
}


Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
	delete _brain;
}
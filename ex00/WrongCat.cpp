/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:53:09 by maissat           #+#    #+#             */
/*   Updated: 2025/09/19 17:03:27 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

	WrongCat::WrongCat(void)
	{
		this->_type = "WrongCat";
	}

	WrongCat::~WrongCat()
	{
	}

	WrongCat::WrongCat(WrongCat &other)
	{
		*this = other;
	}

	WrongCat &WrongCat::operator=(WrongCat &other)
	{
		this->_type = other._type;	
		return (*this);
	}

	void WrongCat::makeSound() const
	{
		std::cout << " Wrong Meawwwwww\n";
	}
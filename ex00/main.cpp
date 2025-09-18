/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 21:54:34 by root              #+#    #+#             */
/*   Updated: 2025/09/18 17:14:10 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const WrongAnimal* Animal = new WrongAnimal();
	const A* Dog = new Animal();
	const WrongCat* Cat = new WrongCat();
	std::cout << Cat->getType() << " " << std::endl;
	std::cout << Animal->getType() << " " << std::endl;
	Cat->makeSound();
	Animal->makeSound();
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 21:34:51 by root              #+#    #+#             */
/*   Updated: 2025/09/21 17:31:23 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal &other);
		Animal &operator=(Animal &other);
		virtual ~Animal(); //Pour appeler les destructeurs enfants egalements !
		std::string getType() const;
		virtual void makeSound() const = 0; //passe la fonction en virtuel pure ! necessaire pour que la classe devienne abstraite.
};

#endif
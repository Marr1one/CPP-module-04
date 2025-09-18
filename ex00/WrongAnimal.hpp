/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:32:49 by maissat           #+#    #+#             */
/*   Updated: 2025/09/18 17:11:27 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal 
{
	protected:
		std::string _type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal &other);
		WrongAnimal &operator=(WrongAnimal &other);
		~WrongAnimal();
		std::string getType() const;
		void makeSound() const;

};

#endif
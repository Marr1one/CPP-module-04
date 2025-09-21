/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 21:43:38 by root              #+#    #+#             */
/*   Updated: 2025/09/21 15:24:01 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"


class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat &other);
		Cat &operator=(Cat &other);
		~Cat();	
		void makeSound() const ;
	private:
		Brain *_brain;
};




#endif

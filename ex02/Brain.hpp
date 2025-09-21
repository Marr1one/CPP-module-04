/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 16:31:56 by root              #+#    #+#             */
/*   Updated: 2025/09/19 18:35:50 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
	public:
		Brain();
		Brain(Brain &other);
		Brain &operator=(Brain &other);
		virtual ~Brain();
	private :
		std::string ideas[100];
};

#endif
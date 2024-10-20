/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:21:14 by pbencze           #+#    #+#             */
/*   Updated: 2024/10/20 16:36:46 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain & other){
    std::cout << "Brain copy constructor called" << std::endl;
    *this = other;
}

Brain & Brain::operator=(const Brain & other){
    if (this != &other){
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain(){
    std::cout << "Brain destructor called" << std::endl;
}

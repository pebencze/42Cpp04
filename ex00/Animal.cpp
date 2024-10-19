/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:30:15 by pbencze           #+#    #+#             */
/*   Updated: 2024/10/19 16:36:43 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal & other){
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
}

Animal & Animal::operator=(const Animal & other){
    if (this != &other){
        this->_type = other._type;
    }
    return *this;
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const{
    return this->_type;
}

void Animal::makeSound() const {
    std::cout << "Animal sound" << std::endl;
}

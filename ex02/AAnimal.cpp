/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:30:15 by pbencze           #+#    #+#             */
/*   Updated: 2024/10/21 12:15:16 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(){
    std::cout << "Animal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal & other){
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
}

AAnimal & AAnimal::operator=(const AAnimal & other){
    if (this != &other){
        this->_type = other._type;
    }
    return *this;
}

AAnimal::~AAnimal(){
    std::cout << "Animal destructor called" << std::endl;
}

std::string AAnimal::getType() const{
    return this->_type;
}

void AAnimal::makeSound() const {
    //std::cout << "Animal sound" << std::endl;
}

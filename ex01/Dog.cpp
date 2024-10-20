/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:30:46 by pbencze           #+#    #+#             */
/*   Updated: 2024/10/20 16:41:27 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog constructor called" << std::endl;
    this->_type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog & other){
    std::cout << "Dog copy constructor called" << std::endl;
    *this = other;
}

Dog & Dog::operator=(const Dog & other){
    if (this != &other){
        this->_type = other._type;
    }
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

void Dog::makeSound() const {
    std::cout << "Woof" << std::endl;
}
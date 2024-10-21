/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:30:39 by pbencze           #+#    #+#             */
/*   Updated: 2024/10/21 12:39:21 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat constructor called" << std::endl;
    this->_type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat & other){
    std::cout << "Cat copy constructor called" << std::endl;
    *this = other;
}

Cat & Cat::operator=(const Cat & other){
    if (this != &other){
        this->_type = other._type;
        this->brain = new Brain(); //DEEP COPY
        *(this->brain) = *(other.brain); //DEEP COPY
    }
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}

void Cat::makeSound() const {
    std::cout << "Meow" << std::endl;
}

const std::string Cat::getIdea(int n) const{
    return (this->brain->ideas[n]);
}

void Cat::setIdea(int n, std::string idea){
    this->brain->ideas[n] = idea;
}
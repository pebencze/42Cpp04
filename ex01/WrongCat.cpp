/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:23:44 by pbencze           #+#    #+#             */
/*   Updated: 2024/10/21 11:16:48 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCat constructor called" << std::endl;
    this->_type = "WrongCat";
    this->brain = new Brain();
}

WrongCat::WrongCat(const WrongCat & other){
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = other;
}

WrongCat & WrongCat::operator=(const WrongCat & other){
    if (this != &other){
        this->_type = other._type;
        this->brain = other.brain; //SHALLOW COPY
    }
    return *this;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "WrongMeow" << std::endl;
}

const std::string WrongCat::getIdea(int n) const{
    return (this->brain->ideas[n]);
}

void WrongCat::setIdea(int n, std::string idea){
    this->brain->ideas[n] = idea;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:30:51 by pbencze           #+#    #+#             */
/*   Updated: 2024/10/21 12:39:39 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {

    //AAnimal animal;
    Dog dog;
    Cat cat;

    //std::cout << animal.getType() << std::endl;
    //animal.makeSound();
    std::cout << dog.getType() << std::endl;
    dog.makeSound();
    cat.makeSound();

    
    return 0; 
}
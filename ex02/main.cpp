/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:30:51 by pbencze           #+#    #+#             */
/*   Updated: 2024/10/21 12:14:13 by pbencze          ###   ########.fr       */
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

    //std::cout << animal.getType() << std::endl;
    //animal.makeSound();
    std::cout << dog.getType() << std::endl;
    dog.makeSound();

    
    return 0; 
}
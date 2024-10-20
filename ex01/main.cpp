/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:30:51 by pbencze           #+#    #+#             */
/*   Updated: 2024/10/20 17:55:49 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(int argc, char **argv) {
    std::cout << "TESTING THE ARRAY" << std::endl;
    std::cout << "-------------------CONSTRUCTORS------------------" << std::endl;
    if (argc != 2){
        std::cout << "Please provide a second argument." << std::endl;
        return (0);
    }
    int num = atoi(argv[1]);
    Animal *animals[num];
    
    for (int i = 0; i < num / 2; i++){
        animals[i] = new Dog();
    }
    for (int i = num / 2; i < num; i++){
        animals[i] = new Cat();
    }
    
    std::cout << "----------------------TYPES----------------------" << std::endl;
    for (int i = 0; i < num; i++){
        std::cout << "animal " << i << " is of type: " << animals[i]->getType() 
        << " and makes the sound: " << animals[i]->makeSound() << std::endl;
    }

    std::cout << "-------------------DESTRUCTORS-------------------" << std::endl;
    for (int i = num - 1; i >= 0; i--){
        delete(animals[i]); //delete function!
    }

    std::cout << "TESTING DEEP COPIES" << std::endl;
    
    const Animal* dogA = new Dog();
    const Animal* dogB = new Dog(); 
    const Animal* cat = new Cat();
    
    
    
    delete dogA;
    delete dogB;
    delete cat;
    
    return 0; 
}
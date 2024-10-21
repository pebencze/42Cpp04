/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:30:51 by pbencze           #+#    #+#             */
/*   Updated: 2024/10/21 11:49:46 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(int argc, char **argv) {
    std::cout << "****************TESTING THE ARRAY****************" << std::endl;
    if (argc != 2){
        std::cout << "Please provide a second argument." << std::endl;
        return (0);
    }
    int num = atoi(argv[1]);
    std::cout << "-------------------CONSTRUCTORS------------------" << std::endl;
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
        << " and makes the sound: ";
        animals[i]->makeSound();
        std::cout << std::endl;
    }

    std::cout << "-------------------DESTRUCTORS-------------------" << std::endl;
    for (int i = num - 1; i >= 0; i--){
        delete(animals[i]); //delete function!
    }

    std::cout << std::endl << "***************TESTING DEEP COPIES****************" << std::endl;
    
    Dog* dog = new Dog();
    Cat* cat = new Cat();
    WrongCat* wrongCat = new WrongCat();

    dog->setIdea(1, "I am a dog");
    dog->setIdea(99, "I am awesome");
    
    Dog* dogCopy = new Dog(*dog);

    dog->setIdea(99, "I am hungry");
    
    std::cout << std::endl << "DEEP COPY" 
    << std::endl << "Idea 1 set before copying: "
    << dog->getIdea(1) << ", "
    << dogCopy->getIdea(1) << std::endl << "Idea 99 changed after copying: "
    << dog->getIdea(99) << ", "
    << dogCopy->getIdea(99) << std::endl << std::endl;

    cat->setIdea(1, "I am a cat");
    cat->setIdea(99, "I am adorable");
    
    Cat* catCopy = new Cat(*cat);

    cat->setIdea(99, "I am tired");
    
    std::cout << std::endl << "DEEP COPY" 
    << std::endl << "Idea 1 set before copying: "
    << cat->getIdea(1) << ", "
    << catCopy->getIdea(1) << std::endl << "Idea 99 changed after copying: "
    << cat->getIdea(99) << ", "
    << catCopy->getIdea(99) << std::endl << std::endl;

    wrongCat->setIdea(1, "I am a wrongCat");
    wrongCat->setIdea(99, "I am adorable");
    
    WrongCat* wrongCatCopy = new WrongCat(*wrongCat);

    wrongCat->setIdea(99, "I am soo tired");
    
    std::cout << std::endl << "SHALLOW COPY" 
    << std::endl << "Idea 1 set before copying: "
    << wrongCat->getIdea(1) << ", "
    << wrongCatCopy->getIdea(1) << std::endl << "Idea 99 changed after copying: "
    << wrongCat->getIdea(99) << ", "
    << wrongCatCopy->getIdea(99) << std::endl << std::endl;
    
    delete dog;
    delete dogCopy;
    delete cat;
    delete catCopy;
    delete wrongCat;
    delete wrongCatCopy;
    
    return 0; 
}
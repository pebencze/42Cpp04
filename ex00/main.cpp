/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:30:51 by pbencze           #+#    #+#             */
/*   Updated: 2024/10/23 15:16:22 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "-------------------CONSTRUCTORS------------------" << std::endl;
    const Animal* meta = new Animal();
    const Dog* dog = new Dog();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wrong = new WrongCat();

    std::cout << "----------------------TYPES----------------------" << std::endl;
    std::cout << j->getType() << std::endl;
    std::cout << dog->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    std::cout << meta->getType() << std::endl;
    std::cout << wrong->getType() << std::endl;

    std::cout << "---------------------SOUNDS----------------------" << std::endl;
    j->makeSound();
    dog->makeSound();
    i->makeSound();
    meta->makeSound();
    wrong->makeSound();

    std::cout << "-------------------DESTRUCTORS-------------------" << std::endl;
    delete meta;
	delete dog;
    delete j;
    delete i;
    delete wrong;

    return 0;
}

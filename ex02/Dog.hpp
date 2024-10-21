/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:30:48 by pbencze           #+#    #+#             */
/*   Updated: 2024/10/21 12:10:26 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
    public:
        Dog();
        Dog(const Dog & other);
        Dog & operator=(const Dog & other);
        ~Dog();

        void makeSound() const;

        const std::string getIdea(int n) const;
        void setIdea(int n, std::string idea);

    private:
        Brain *brain;
};
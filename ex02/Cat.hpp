/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:30:44 by pbencze           #+#    #+#             */
/*   Updated: 2024/10/21 12:39:25 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
    public:
        Cat();
        Cat(const Cat & other);
        Cat & operator=(const Cat & other);
        ~Cat();

        void makeSound() const;

        const std::string getIdea(int n) const;
        void setIdea(int n, std::string idea);
        
    private:
        Brain *brain;
};
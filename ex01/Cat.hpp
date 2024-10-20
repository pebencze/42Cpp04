/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:30:44 by pbencze           #+#    #+#             */
/*   Updated: 2024/10/20 16:39:28 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    public:
        Cat();
        Cat(const Cat & other);
        Cat & operator=(const Cat & other);
        ~Cat();

        void makeSound() const;
        
    private:
        Brain *brain;
};
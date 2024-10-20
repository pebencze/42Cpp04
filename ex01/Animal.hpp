/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:29:56 by pbencze           #+#    #+#             */
/*   Updated: 2024/10/20 15:24:23 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal {
    public:
        Animal();
        Animal(const Animal & other);
        Animal & operator=(const Animal & other);
        virtual ~Animal();
        
        virtual void makeSound() const; //dynamic function or virtual member function (that will be overridden)
        std::string getType() const;

    protected:
        std::string _type;
};
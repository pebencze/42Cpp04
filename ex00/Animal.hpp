/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:29:56 by pbencze           #+#    #+#             */
/*   Updated: 2024/10/19 16:28:19 by pbencze          ###   ########.fr       */
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
        ~Animal();
        
        void makeSound() const;
        std::string getType() const;

    protected:
        std::string _type;
};
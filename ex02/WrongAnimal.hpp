/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:19:46 by pbencze           #+#    #+#             */
/*   Updated: 2024/10/21 11:51:04 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Brain.hpp"

class WrongAnimal {
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal & other);
        WrongAnimal & operator=(const WrongAnimal & other);
        virtual ~WrongAnimal();
        
        void makeSound() const;
        std::string getType() const;

    protected:
        std::string _type;
};
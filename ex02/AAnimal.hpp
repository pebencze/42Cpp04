/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:29:56 by pbencze           #+#    #+#             */
/*   Updated: 2024/10/21 12:16:01 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class AAnimal {
    public:
        AAnimal();
        AAnimal(const AAnimal & other);
        AAnimal & operator=(const AAnimal & other);
        virtual ~AAnimal();
        
        virtual void makeSound() const = 0;
        std::string getType() const;

    protected:
        std::string _type;
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:22:14 by pbencze           #+#    #+#             */
/*   Updated: 2024/10/21 11:15:04 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        WrongCat(const WrongCat & other);
        WrongCat & operator=(const WrongCat & other);
        ~WrongCat();

        void makeSound() const;

        const std::string getIdea(int n) const;
        void setIdea(int n, std::string idea);

    private:
        Brain *brain;
        
};
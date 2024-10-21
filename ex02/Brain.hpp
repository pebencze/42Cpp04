/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:21:12 by pbencze           #+#    #+#             */
/*   Updated: 2024/10/21 10:53:01 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Brain {
    public:
        Brain();
        Brain(const Brain & other);
        Brain & operator=(const Brain & other);
        ~Brain();

        
        
        std::string ideas[100];
};
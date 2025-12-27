/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 19:29:09 by modat             #+#    #+#             */
/*   Updated: 2025/12/26 19:29:09 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class   Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string name);
        ~Zombie(); 
        // member function
        void announce( void );
};

// standalone functions 
Zombie* newZombie(std::string name);
void    randomChump(std::string name);
 
#endif
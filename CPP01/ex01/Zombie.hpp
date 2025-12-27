/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 21:54:11 by modat             #+#    #+#             */
/*   Updated: 2025/12/27 21:54:11 by modat            ###   ########.fr       */
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
    Zombie();
    ~Zombie();
    void    setName(std::string name);
    void    announce(void);
};

Zombie* zombieHorde(int N, std::string name);
#endif
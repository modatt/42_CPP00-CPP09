/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 22:51:04 by modat             #+#    #+#             */
/*   Updated: 2025/12/27 22:51:04 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl() {}

void Harl::debug()
{
    std::cout << "Debug: I love having extra bacon for my burger." << std::endl;
}

void Harl::info()
{
    std::cout << "Info: Adding extra bacon costs more money." << std::endl;
}

void Harl::warning()
{
    std::cout << "Warning: I think I deserve some extra bacon for free." << std::endl;
}

void Harl::error()
{
    std::cout << "Error: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(const std::string &level)
{
    // array of function pointers
    void (Harl::*functions[])(void) = 
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    // array of corresponding levels
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*functions[i]) (); // calling the member function pointer
            return ;
        }
    }
}
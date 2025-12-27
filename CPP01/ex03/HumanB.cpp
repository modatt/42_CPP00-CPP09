/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 22:05:45 by modat             #+#    #+#             */
/*   Updated: 2025/12/26 22:05:45 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string _name): name(_name), weaponType(NULL) {}

void    HumanB::setWeapon(Weapon& _weaponType) // why para &, because in *ptr = &str;
{
    this->weaponType = &_weaponType;
}

void    HumanB::attack(void)
{
    if (this->weaponType)
        std::cout << name << " attacks with their " << weaponType->getType();
    else
        std::cout << name << " has no weapon!" << std::endl;
}
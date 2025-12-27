/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 22:06:51 by modat             #+#    #+#             */
/*   Updated: 2025/12/26 22:06:51 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

// Constructor 

// ClassName::ClassName(signature): classAttribuate(constructor var), ClassAttribute(constactor var) {};
HumanA::HumanA(std::string _name, Weapon& _weapon): name(_name), weapon(_weapon) {};

void    HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 21:25:19 by modat             #+#    #+#             */
/*   Updated: 2025/12/26 21:25:19 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// ) member function that returns a constant reference to type
// how come?? 
/*
In C++, the return type you define in the header file acts like a mold. Even if you just type the word type, the compiler looks at the return mold you defined and shapes the output to match it.

How it works step-by-step
If your function is defined like this: const std::string& Weapon::getType()

You write return type;.

The compiler sees that type is a std::string.

The compiler looks at the return type: const std::string&.

Instead of making a copy, it simply passes back the memory address (the reference) of that specific type variable, while adding a "read-only" (const) restriction to it.

*/

Weapon::Weapon(std::string weaponType): type(weaponType) {};

const std::string&     Weapon::getType() const
{
    return this->type;
}

void     Weapon::setType(std::string newType)
{
    this->type = newType;
}
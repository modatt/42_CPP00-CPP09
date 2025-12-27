/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 22:02:32 by modat             #+#    #+#             */
/*   Updated: 2025/12/26 22:02:32 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

// composion // class has class
// human has a weapon? yes composision
// is human a weapon? yes  inheritance 
class   HumanB
{
    private:
        std::string name;
        Weapon *weaponType;
    public:
        HumanB(std::string _name);
        HumanB(std::string _name, Weapon& _weaponType);
        void    setWeapon(Weapon& _weaponType);
        void    attack();
};

#endif
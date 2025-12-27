/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 21:26:17 by modat             #+#    #+#             */
/*   Updated: 2025/12/26 21:26:17 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class   Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string weaponType);
        const std::string& getType() const;
        void setType(std::string newType);
};

#endif
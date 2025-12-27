/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 22:06:41 by modat             #+#    #+#             */
/*   Updated: 2025/12/26 22:06:41 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class   HumanA
{
    private:
        std::string name;
        Weapon& weapon;
    public:
        HumanA(std::string _name, Weapon& _weapon);
        void    attack();
};

#endif
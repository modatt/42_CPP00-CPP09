/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 23:30:37 by modat             #+#    #+#             */
/*   Updated: 2025/12/27 23:30:37 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int     main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return 1;
    }

    Harl harl;

    harl.filter(av[1]);

    return 0;
}
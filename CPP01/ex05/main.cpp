/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 22:53:13 by modat             #+#    #+#             */
/*   Updated: 2025/12/27 22:53:13 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int     main(void)
{
    Harl harl;

    std::cout << "[ DEBUG ]" << std::endl;
    harl.complain("DEBUG");
    std::cout << "[ WARNING ]" << std::endl;
    harl.complain("WARNING");
    std::cout << "[ UNKNOWN ]" << std::endl;
    harl.complain("INVALID_LEVEL");

    return 0;
}
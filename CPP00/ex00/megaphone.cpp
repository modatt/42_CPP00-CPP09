/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MegaPhone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 21:37:30 by modat             #+#    #+#             */
/*   Updated: 2025/12/18 21:37:30 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <algorithm>
// using namespace std;

int     main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        return 1;
    }
    for (int i = 1; i < ac; i++)
    {
        std::string arg = av[i];
        std::transform(arg.begin(), arg.end(), arg.begin(), ::toupper);
        std::cout << arg;
        if (i + 1 != ac)
            std::cout << " ";
    }
    return 0;
}

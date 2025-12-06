/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 20:49:03 by marvin            #+#    #+#             */
/*   Updated: 2025/10/08 20:49:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>
// using namespace std;

unsigned char to_upper(unsigned char c)
{
    return (std::toupper(c));
}

int     main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (1);
    }
    for (int i = 1; i < ac; i++)
    {
        std::string arg(av[i]);
        std::transform(arg.begin(), arg.end(), arg.begin(), to_upper);
        std::cout << arg;
        if (i + 1 != ac)
            std::cout << ' ';
    }
    return (0);
}

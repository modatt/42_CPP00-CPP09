/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 19:28:19 by modat             #+#    #+#             */
/*   Updated: 2025/12/26 19:28:19 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int     main(void)
{
    // create a zombie on a stack 
    std::cout << "Creating a Stack zombie..." << std::endl;
    randomChump("Stacky"); // desstroyed after randomChump finishes.

    std::cout << "\nCreating a heap zombie..." << std::endl;
    // create a zombie on the heap
    Zombie* heapZombie = newZombie("Heapy");
    heapZombie->announce();
    delete heapZombie;
    return 0;
}
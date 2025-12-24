/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 21:38:11 by modat             #+#    #+#             */
/*   Updated: 2025/12/18 21:38:11 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"
#include "Contact.hpp"

int     main(void)
{
    PhoneBook   pb;
    std::string option;
    while (1)
    {
        std::cout << "\nEnter (ADD, SEARCH, EXIT):\n- ADD: to add contact.\n- SEARCH: to search for a contact.\n- EXIT: to exit the phonebook.\n";
        std::getline(std::cin, option);
        if (option == "ADD" || option == "Add" || option == "add")
        {
            // cont.set_contact();
            pb.addContact();
        }
        else if (option == "SEARCH" || option == "Search" || option == "search")
        {
            std::cout << "I will search for a contact\n";
        }
        else if (option == "EXIT" || option == "Exit" || option == "exit")
            break;
        else
            std::cout << "Invalid Input." << std::endl;
    }
    std::cout << "Thank you for using our PhoneBook service." << std::endl;
    return (0);
}

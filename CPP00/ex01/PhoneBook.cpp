/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 21:38:18 by modat             #+#    #+#             */
/*   Updated: 2025/12/18 21:38:18 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void    PhoneBook::addContact(void)
{
     // more delete and add
   std::string first, last, nick, number, secret;

   // first name
   std::cout << "Enter Contact Info:\n";
   std::cout << "First Name: ";
   std::getline(std::cin, first);

   //last name
    std::cout << "Last Name: ";
    std::getline(std::cin, last);

    // nickname
    std::cout << "Nickname: ";
    std::getline(std::cin, nick);
    
    // phone number
    std::cout << "Phone Number: ";
    std::getline(std::cin, number);

    // secret
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, secret);

    // check for empty 
    if (first.empty() || last.empty() || nick.empty() || number.empty() || secret.empty())
    {
        std::cout << "Error: fields cannot be empty.\n";
        return ;
    }


    // store in contact
    Contact cont;

    cont.setFirstName(first);
    cont.setLastName(last);
    cont.setNickname(nick);
    cont.setPhoneNumber(number);
    cont.setDarkestSecret(secret);


    // store contact in PhoneBook
    contacts[index] = cont;
    std::cout << "Contact added.\n";
}

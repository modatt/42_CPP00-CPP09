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

// func - 0 // init class variables
PhoneBook::PhoneBook() : contactCount(0), index(0) {};
// func - 1
std::string    PhoneBook::columnFormat(const std::string &text) const
{
    if (text.length() > 10)
        return text.substr(0, 9) + ".";
    return text;
}

// func - 2
void    PhoneBook::addContact(void)
{
    if (contactCount > 8)
        std::cout << "overwrite a contact\n";
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
    cont.setNickName(nick);
    cont.setPhoneNumber(number);
    cont.setDarkestSecret(secret);


    // store contact in PhoneBook
    contacts[index] = cont;
    index++;
    if (index > 7)
        index = 0;
    if (contactCount < 8)
        contactCount++;
    std::cout << "Contact added.\n";
}

// func - 3
void    PhoneBook::searchContact(void)
{
    // check if is PhoneBook is empty
    if (contactCount == 0)
    {
        std::cout << "PhoneBook is empty\n";
        return ;
    }
    int col = 10;
    int space = 1;
    std::string header = "=========";
    // print table header
    std::cout << std::setw(col) << std::right << "Index"
                << std::setw(space) << std:: right << "|" 
                << std::setw(col) << std::right << "First Name"
                << std::setw(space) << std::right << "|"
                << std::setw(col) << std::right << "Last Name"
                << std::setw(space) << std::right << "|"
                << std::setw(col) << std::right << "Nickname\n"
                << std::setw(col) << std::right << header
                << std::setw(space) << " "
                << std::setw(col) << std::right << header
                << std::setw(space) << " "
                << std::setw(col) << std::right << header
                << std::setw(space) << " "
                << std::setw(col) << std::right << header << std::endl;
    // Contact table
    for (int i = 0; i < contactCount; i++)
    {
        std::cout << std::setw(col) << std::right << i
                << std::setw(space) << std::right << "|"
                << std::setw(col) << std::right << columnFormat(contacts[i].getFirstName())
                << std::setw(space) << std::right << "|"
                << std::setw(col) << std::right << columnFormat(contacts[i].getLastName())
                << std::setw(space) << std::right << "|"
                << std::setw(col) << std::right << columnFormat(contacts[i].getNickName()) << std::endl;
    }
    // get index
    int index;
    std::cout << "Enter index: ";
    std::cin >> index;
    
    // print contact's index
    if (index < 0 || index >= contactCount || std::cin.fail())
    {
        std::cout << "Invalid index.\n";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        return ;
    }
    
    std::cin.ignore(10000, '\n');
    
    // display full contact
    std::cout << "First Name: " << contacts[index].getFirstName() << "\n";
    std::cout << "Last Name: " << contacts[index].getLastName() << "\n";
    std::cout << "NickName: " << contacts[index].getNickName() << "\n";
    std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << "\n";
    std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << "\n";
}
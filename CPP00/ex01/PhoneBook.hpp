/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 21:38:27 by modat             #+#    #+#             */
/*   Updated: 2025/12/21 21:42:11 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include <algorithm>
#include "Contact.hpp"


class PhoneBook
{
    private:
        Contact contacts[8]; // function in add check if index is 8
        int contactCount;
        int index;
    public:
        // PhoneBook();
        void addContact();
    //      void    setFirstName(first);
    // void    setLastName(last);
    // void    setNickname(nick);
    // void    setPhoneNumber(number);
    // void    setDarkestSecret(secret);
        // void searchContact() const;
};

#endif
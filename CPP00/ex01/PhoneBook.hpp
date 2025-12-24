/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 21:38:27 by modat             #+#    #+#             */
/*   Updated: 2025/12/25 02:32:48 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include <algorithm>
#include "Contact.hpp"
#include <iomanip>


class PhoneBook
{
    private:
        Contact contacts[8]; // function in add check if index is 8
        int contactCount;
        int index;
        std::string    columnFormat(const std::string &text) const;
    public:
        PhoneBook();
        void    addContact(void);
        void    searchContact(void);
};

#endif
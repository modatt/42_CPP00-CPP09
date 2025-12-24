/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 21:37:47 by modat             #+#    #+#             */
/*   Updated: 2025/12/18 21:37:47 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// func - 1
void    Contact::setFirstName(std::string first)
{
    firstName = first;
}

// func - 2
void    Contact::setLastName(std::string last)
{
    lastName = last;
}

// func - 3
void    Contact::setNickName(std::string nick)
{
    nickName = nick;
}

// func - 4
void    Contact::setPhoneNumber(std::string number)
{
    phoneNumber = number;
}

// func - 5
void    Contact::setDarkestSecret(std::string secret)
{
    darkestSecret = secret;
}

// func - 6
std::string    Contact::getFirstName() const
{
    return firstName;
}

// func - 7
std::string     Contact::getLastName() const
{
    return lastName;
}

// func - 8
std::string     Contact::getNickName() const
{
    return nickName;
}

// func - 9
std::string     Contact::getPhoneNumber() const
{
    return phoneNumber;
}

// func - 10
std::string     Contact::getDarkestSecret() const
{
    return darkestSecret;
}
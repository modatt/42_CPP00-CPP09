/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 21:38:04 by modat             #+#    #+#             */
/*   Updated: 2025/12/18 21:38:04 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <algorithm>
#include <cctype>

class Contact
{
    // specifier 
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;

    public:
    //     //setters
        void    setFirstName(std::string first);
        void    setLastName(std::string last);
        void    setNickName(std::string nick);
        void    setPhoneNumber(std::string number);
        void    setDarkestSecret(std::string secret);

    //     Contact();
    //     // getters
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickName() const;
        std::string getPhoneNumber() const;
        std::string getDarkestSecret() const;
        // helper functions


    //     // constructors & destructors // setup & teardown
    //     // ~set_firstName();
    //     // ~get_firstName();
    //     // controlling access to private data

};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 20:48:54 by marvin            #+#    #+#             */
/*   Updated: 2025/10/08 20:48:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int     main(void)
{
    int  i = 0;
    PhoneBook obj;
    // std::cin >> obj.contact;
    std::cin >> obj.contact[i];
    // std::cout << obj.name << std::endl;
    std::cout << obj.contact[i] << std::endl;
    return (0);
}

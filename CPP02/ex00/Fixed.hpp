/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 16:37:14 by modat             #+#    #+#             */
/*   Updated: 2026/01/11 12:19:52 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int fixedPoint;
	static const int fracBits;
public:
	Fixed();
	Fixed(const Fixed &fixedCopy);
	Fixed &operator=(const Fixed &fixedCopy);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif 

	

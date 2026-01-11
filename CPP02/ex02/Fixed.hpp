/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 16:37:14 by modat             #+#    #+#             */
/*   Updated: 2026/01/10 23:04:08 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>


// The class represents fixed-point numbers
class Fixed
{
	private:
		int fixedPoint;
		const static int fracBits;
	public:
		Fixed();
		Fixed(Fixed &fixedCopy); // & because without it it will create a newo bject, & use same object
		Fixed &operator=(Fixed &fixedCopy); // this reference to the func, & point to 
		~Fixed();
		// ~Fixed(Fixed &fixedCopy); // check it
		Fixed(const int &nbr);
		Fixed(const float &fnbr);
		float toFloat( void ) const;
		int 	toInt( void ) const;
		
		//new 
		static Fixed &min(Fixed &fixedPoint1, Fixed &fixedPoint2);
		static  const Fixed &min(const Fixed &fixedPoint1, const Fixed &fixedPoint2);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
		
		
		int getRawBits( void ) const;
		void 	setRawBits( int const raw );
};

// alongside functions
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif 

/*
const after a function applies to this.
static functions have no this.
Therefore: static + trailing const is illegal.
*/

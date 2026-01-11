/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 16:37:14 by modat             #+#    #+#             */
/*   Updated: 2026/01/11 11:08:35 by modat            ###   ########.fr       */
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
		// You must be able to copy const objects
		// Copying should not modify the source
		Fixed(const Fixed &fixedCopy); // & avoids copying and allows direct access to the original object.
		Fixed &operator=(const Fixed &fixedCopy); // this reference to the func, & point to 
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
		// operators 
			// compersion
		bool 	operator>(const Fixed &other) const;
		bool 	operator<(const Fixed &other) const;
		bool	operator>=(const Fixed &other) const;
		bool	operator<=(const Fixed &other) const;
		bool	operator==(const Fixed &other) const;
		bool	operator!=(const Fixed &other) const;

			// arithetic
		Fixed operator+(const Fixed &other) const;
		Fixed operator-(const Fixed &other) const;
		Fixed operator*(const Fixed &other) const;
		Fixed operator/(const Fixed &other) const;
		
		// pre-increment
		Fixed &operator++();
		// post-increment
		Fixed operator++(int);
		// pre-decrement
		Fixed &operator--();
		// post-decrement
		Fixed operator--(int);

		
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

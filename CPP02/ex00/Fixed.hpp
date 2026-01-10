/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 16:37:14 by modat             #+#    #+#             */
/*   Updated: 2026/01/10 17:11:43 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>


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
		int getRawBits( void ) const;
		void 	setRawBits( int const raw );
	};
	#endif 
	
	
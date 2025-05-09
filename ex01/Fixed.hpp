/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:54:33 by pjimenez          #+#    #+#             */
/*   Updated: 2025/04/04 12:54:19 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
#define _FIXED_HPP_

#include <iostream>


class Fixed
{
    private:
        int value;
        static const int    bits = 8;
    public:
        Fixed();
        Fixed(Fixed const &src);
        Fixed(const int n);
        Fixed(const float f);
        ~Fixed();
        
        Fixed&  operator = (Fixed const &rSym);
        int     getRawBits( void ) const;
        void    setRawBits( int const raw);
        float   toFloat() const;
		int	    toInt() const;
};

std::ostream&	operator<<(std::ostream& o, Fixed const &rSym);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:54:33 by pjimenez          #+#    #+#             */
/*   Updated: 2025/05/15 13:49:07 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
#define _FIXED_HPP_

#include <iostream>


class Fixed
{
    private:
        int vale;
        static const int    bits = 8;
    public:
        Fixed();
        Fixed(Fixed const &src);
        ~Fixed();
        
        Fixed& operator = (Fixed const &rSym);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif
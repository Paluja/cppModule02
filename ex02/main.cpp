/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:20:30 by pjimenez          #+#    #+#             */
/*   Updated: 2025/04/04 13:11:17 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Fixed.hpp"  // Asegúrate de que este sea el nombre correcto

int main() {
    Fixed a(5.5f);
    Fixed b(2);

    std::cout << "Operaciones Aritméticas:" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "a + b = " << (a + b) << std::endl;
    std::cout << "a - b = " << (a - b) << std::endl;
    std::cout << "a * b = " << (a * b) << std::endl;
    std::cout << "a / b = " << (a / b) << std::endl;

    std::cout << "\nComparaciones:" << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a <= b: " << (a <= b) << std::endl;
    std::cout << "a >= b: " << (a >= b) << std::endl;
    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;

    std::cout << "\nIncremento / Decremento:" << std::endl;
    Fixed c = a;
    std::cout << "c = " << c << std::endl;
    std::cout << "++c = " << ++c << std::endl;     // Pre-incremento
    std::cout << "c++ = " << c++ << std::endl;     // Post-incremento
    std::cout << "c = " << c << std::endl;

    std::cout << "--c = " << --c << std::endl;     // Pre-decremento
    std::cout << "c-- = " << c-- << std::endl;     // Post-decremento
    std::cout << "c = " << c << std::endl;

    std::cout << "\nFunciones min / max:" << std::endl;
    Fixed d(3.3f);
    Fixed e(9.9f);
    std::cout << "d = " << d << ", e = " << e << std::endl;
    std::cout << "min(d, e) = " << Fixed::min(d, e) << std::endl;
    std::cout << "max(d, e) = " << Fixed::max(d, e) << std::endl;

    const Fixed f(42.42f);
    const Fixed g(42.43f);
    std::cout << "min(f, g) [const] = " << Fixed::min(f, g) << std::endl;
    std::cout << "max(f, g) [const] = " << Fixed::max(f, g) << std::endl;

    return 0;
}

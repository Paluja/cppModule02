/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:01:01 by pjimenez          #+#    #+#             */
/*   Updated: 2024/12/14 16:30:23 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed() : value(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called" << std::endl;
	this->value = n << bits;
}

Fixed::Fixed(const float f) : value(f) {
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(f * (1 << bits));
}


//OPERATORS--------------------------------------------------------------

Fixed& Fixed::operator=(Fixed const &rSym) {
    if (this != &rSym)
        this->value = rSym.value;
    std::cout << "Assignment opreator called" << std::endl;
    return *this;
}

Fixed Fixed::operator+(Fixed const &rSym) const {
	return Fixed(this->toFloat() + rSym.toFloat());
}

Fixed Fixed::operator-(Fixed const &rSym) const {
	return Fixed(this->toFloat() - rSym.toFloat());
}

Fixed Fixed::operator*(Fixed const &rSym) const {
	return Fixed(this->toFloat() * rSym.toFloat());
}

Fixed Fixed::operator/(Fixed const &rSym) const {
	return Fixed(this->toFloat() / rSym.toFloat());
}

bool Fixed::operator<(Fixed const &rSym) const {
	return this->toFloat() < rSym.toFloat();
}

bool Fixed::operator>(Fixed const &rSym) const {
	return this->toFloat() > rSym.toFloat();
}

bool Fixed::operator<=(Fixed const &rSym) const {
	return this->toFloat() <= rSym.toFloat();
}

bool Fixed::operator>=(Fixed const &rSym) const {
	return this->toFloat() >= rSym.toFloat();
}

bool Fixed::operator==(Fixed const &rSym) const {
	return this->toFloat() == rSym.toFloat();
}

bool Fixed::operator!=(Fixed const &rSym) const {
	return this->toFloat() != rSym.toFloat();
}

Fixed& Fixed::operator++() {
	this->value++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed& Fixed::operator--() {
	this->value--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	operator--();
	return tmp;
}
//----------------------------------------------------------------------

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

float	Fixed::toFloat() const {
	return (float)this->value / (float)(1 << bits);
}

int		Fixed::toInt() const {
	return this->value >> bits;
}


Fixed &	Fixed::min(Fixed &a, Fixed &b) {
	if (a < b)
		return a;
	return b;
}

Fixed const &	Fixed::min(Fixed const &a, Fixed const &b) {
	if (a < b)
		return a;
	return b;
}

Fixed &	Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return a;
	return b;
}

Fixed const &	Fixed::max(Fixed const &a, Fixed const &b) {
	if (a > b)
		return a;
	return b;
}


std::ostream&	operator<<(std::ostream& o, Fixed const &rSym) {
	o << rSym.toFloat();
	return o;
}
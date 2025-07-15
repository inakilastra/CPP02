#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fractionalBits = 8;

Fixed::Fixed(const int n){
    this->_fixedPointValue = n << _fractionalBits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f){
    this->_fixedPointValue = roundf((1 << _fractionalBits) * f);
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed() : _fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    this->_fixedPointValue = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_fixedPointValue = other.getRawBits();
    }
    return *this;
}

Fixed::~Fixed() {

    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
    this->_fixedPointValue = raw;
}

int Fixed::toInt(void) const{
    return (int)this->_fixedPointValue >> _fractionalBits;
}

float Fixed::toFloat(void) const{
    return (float)this->_fixedPointValue / (1 << _fractionalBits);
}

std::ostream & operator<<(std::ostream & out, const Fixed & value) {
    // 1. Aquí va la línea que inserta el valor de 'value' en el stream 'out'.
    out << value.toFloat();
    // 2. Aquí va la línea que devuelve el stream 'out'.
    return out;
}
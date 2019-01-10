#include "Fixed.class.hpp"
#include <iostream>
Fixed::Fixed() : _fixed(0) {
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(const Fixed&) {
    std::cout << "Copy constructor called" << std::endl;
    return;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &) {
    std::cout << "Assignation operator called" << std::endl;
}

int Fixed::getRawBits() const {
    return (_fixed);
}

void Fixed::setRawBits(int const raw) {
    _fixed;
}

const int Fixed::_fbits = 8;
int main (){
    Fixed a;
    Fixed b(a);
    Fixed c;

//    c = b;
//    std::cout << a.getRawBits();

}

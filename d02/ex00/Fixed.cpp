
#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called\n";
	return ;
}

Fixed::Fixed(int const val) : _value(val)
{
	std::cout << "Initialisation constructor called\n";
	return ;
}

Fixed::Fixed(Fixed const & src )
{
	std::cout << "Copy constructor called\n";
	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Default destructor called\n";
	return ;
}

Fixed& Fixed::operator=(Fixed const & src)
{
	std::cout << "Assignation operator called\n";
	this->_value = src.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return this->_value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member fuction called\n";
	this->_value = raw;
}

int	const Fixed::_nBits = 8;

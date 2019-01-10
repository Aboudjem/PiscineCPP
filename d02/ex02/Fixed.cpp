
#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called\n";
	return ;
}
Fixed::~Fixed(void)
{
	std::cout << "Default destructor called\n";
	return ;
}

Fixed::Fixed(int const val) : _value(val)
{
	std::cout << "Int constructor called\n";
	this->_value = val << _nBits; 
	return ;
}

Fixed::Fixed(Fixed const & src )
{
	std::cout << "Copy constructor called\n";
	*this = src;
	return ;
}

Fixed::Fixed(float const val)
{
	std::cout << "Float constructor called\n";
	this->_value = roundf(val * (1 << _nBits));
	return ;
}

Fixed& Fixed::operator=(Fixed const & src)
{
	std::cout << "Assignation operator called\n";
	this->_value = src.getRawBits();
	return *this;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (1 << _nBits));
}

int		Fixed::toInt(void) const
{
	return (this->_value >> _nBits);
}

int	Fixed::getRawBits(void) const
{
	return this->_value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member fuction called\n";
	this->_value = raw;
}


bool Fixed::operator<(Fixed const & rhs)
{
	return (this->_value < rhs.getRawBits());
}

bool Fixed::operator>(Fixed const & rhs)
{
	return (this->_value > rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs)
{
	return (this->_value <= rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const & rhs)
{
	return (this->_value >= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const & rhs)
{
	return (this->_value == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const & rhs)
{
	return (this->_value != rhs.getRawBits());
}

Fixed Fixed::operator+(Fixed const & rhs)
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const & rhs)
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const & rhs)
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const & rhs)
{
	return Fixed(this->toFloat() / rhs.toFloat());
}
Fixed& Fixed::operator++(void)
{
	_value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed ret;

	ret = *this;
	operator++();
	return ret;
}

Fixed& Fixed::operator--(void)
{
	_value--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed ret;

	ret = *this;
	operator--();
	return ret;
}

Fixed 			&Fixed::min(Fixed &a, Fixed &b)
{
		return ((a._value < b._value) ? a : b);
}

Fixed 			&Fixed::max(Fixed &a, Fixed &b)
{
		return ((a._value > b._value) ? a : b);
}

Fixed const		&Fixed::min(Fixed const &a, Fixed const &b)
{
		return ((a._value < b._value) ? a : b);
}

Fixed const		&Fixed::max(Fixed const &a, Fixed const &b)
{
		return ((a._value > b._value) ? a : b);
}

std::ostream	&operator<<(std::ostream &os, Fixed const &rhs)
{
	os << rhs.toFloat();
	return (os);
}
int	const Fixed::_nBits = 8;

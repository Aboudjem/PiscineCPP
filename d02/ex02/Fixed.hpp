
#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {
	public:
		Fixed(void);
		Fixed(int const val);
		Fixed(float const val);
		Fixed(Fixed const & src);
		
		~Fixed(void);
		
		float toFloat(void) const;
		int	toInt(void) const;
		
		int	getRawBits(void) const;
		void setRawBits(int const raw);

		Fixed& operator=(Fixed const & rhs);
		
		bool operator<(Fixed const & rhs);
		bool operator>(Fixed const & rhs);
		bool operator>=(Fixed const & rhs);
		bool operator<=(Fixed const & rhs);
		bool operator==(Fixed const & rhs);
		bool operator!=(Fixed const & rhs);
	
		Fixed operator+(Fixed const & rhs);
		Fixed operator-(Fixed const & rhs);
		Fixed operator*(Fixed const & rhs);
		Fixed operator/(Fixed const & rhs);
		Fixed& operator++(void);
		Fixed operator++(int);
		Fixed& operator--(void);
		Fixed operator--(int);
		Fixed& min(Fixed &a, Fixed &b);
		Fixed& max(Fixed &a, Fixed &b);
		Fixed const	&min(Fixed const &a, Fixed const &b);
		Fixed const	&max(Fixed const &a, Fixed const &b);
	private:
		static int const _nBits;
		int	_value;
};

std::ostream				&operator<<(std::ostream &os, Fixed const &rhs);

#endif

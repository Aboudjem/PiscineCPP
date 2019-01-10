
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
		Fixed& operator=(Fixed const &rhs);
		float toFloat(void) const;
		int	toInt(void) const;
		int	getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		static int const _nBits;
		int	_value;
};

std::ostream				&operator<<(std::ostream &os, Fixed const &rhs);

#endif

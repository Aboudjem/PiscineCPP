
#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {
	public:
		Fixed(void);
		Fixed(int const val);
		~Fixed(void);
		Fixed(Fixed const & src);
		Fixed& operator=(Fixed const &rhs);
		int	getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		static int const _nBits;
		int	_value;
};

#endif

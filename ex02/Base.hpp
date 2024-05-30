#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>

class Base
{

	public:

		Base();
		Base( Base const & src );
		virtual ~Base();

		Base &		operator=( Base const & rhs );

	private:

};

class A: public Base {};

class B: public Base {};

std::ostream &			operator<<( std::ostream & o, Base const & i );

#endif
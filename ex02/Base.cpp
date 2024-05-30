#include "Base.hpp"

Base::Base()
{
}

Base::Base(const Base & src)
{
}

Base::~Base()
{}

Base &				Base::operator=( Base const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Base const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}



#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
#include <typeinfo>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <cctype>
#include <cfloat>

//not instantiable (constructor private)

class ScalarConverter
{

	public:
		static void convert(std::string literal);


	private:
		ScalarConverter();
		ScalarConverter( ScalarConverter const & src );
		~ScalarConverter();
		ScalarConverter &		operator=( ScalarConverter const & rhs );

};

#endif
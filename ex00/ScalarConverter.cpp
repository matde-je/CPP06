#include "ScalarConverter.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter( const ScalarConverter & src )
{
	*this = src; 
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScalarConverter::~ScalarConverter()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScalarConverter &				ScalarConverter::operator=( ScalarConverter const & rhs )
{
	if ( this != &rhs )
	{
		//this->_value = rhs.getValue();
	}
	return *this;
}

//static_cast<double>(num)
//typeid(num).name()
void ScalarConverter::convert(std::string literal)
{
	if (literal.find(".") != std::string::npos)
	{

		if (literal.find("f") != std::string::npos)
		{
			try {
				float value = std::stof(literal);
				if (static_cast<char>(value) < 31 || static_cast<char>(value) == 127)
					std::cout << "char: Non displayable\n";
				if (literal == "nan")
					std::cout << "char: Impossible\n";
				else
					std::cout << "char: " << static_cast<char>(value) << "\n";
			} catch (const std::invalid_argument& ia) {
				std::cerr << "Invalid argument: " << ia.what() << std::endl;
			} catch (const std::out_of_range& oor) {
				std::cerr << "Out of range argument: " << oor.what() << std::endl;
			}
		}
		else
		{
			try {
				double value = std::stod(literal);
				if (static_cast<char>(value) < 31 || static_cast<char>(value) == 127)
					std::cout << "char: Non displayable\n";
				if (literal == "nan")
					std::cout << "char: Impossible\n";
				else
					std::cout << "char: " << static_cast<char>(value) << "\n";
			} catch (const std::invalid_argument& ia) {
				std::cerr << "Invalid argument: " << ia.what() << std::endl;
			} catch (const std::out_of_range& oor) {
				std::cerr << "Out of range argument: " << oor.what() << std::endl;
			}
		}
	}
	else {
		try {
			int value = std::stoi(literal);
		} catch (const std::invalid_argument& ia) {
			std::string value = literal;
		} catch (const std::out_of_range& oor) {
			std::cerr << "Out of range argument: " << oor.what() << std::endl;
		}
	}

	
}


	// if (std::stof(literal.c_str()) != 0.0 && literal != "0.0")
	// {
		
	// }
	
	// if (std::atoi(literal.c_str()) != 0 && literal != "0")
	// {
		
	// }
	// 	double convertedValue;
	// 	try {
	// 		convertedValue = std::stod(literal);
	// 	} catch (const std::invalid_argument& ia) {
	// 		std::cerr << "Invalid argument: " << ia.what() << std::endl;
	// 	} catch (const std::out_of_range& oor) {
	// 		std::cerr << "Out of range argument: " << oor.what() << std::endl;
	// 	}
	// 	if (convertedValue >= static_cast<double>(std::numeric_limits<int>::min()) &&
	// 	convertedValue <= static_cast<double>(std::numeric_limits<int>::max())) {
	// 	// Check if the value has a fractional part
	// 		if (std::fabs(convertedValue - std::round(convertedValue)) < std::numeric_limits<double>::epsilon()) {
	// 			// The value is within the range of an int and has no fractional part, so convert to int
	// 			int intValue = static_cast<int>(convertedValue);
	// 		} else {
	// 			// The value has a fractional part, so convert to float
	// 			float floatValue = static_cast<float>(convertedValue);
	// 		}
	// } else {
	// 	// The value is outside the range of an int, so convert to double
	// 	// ...
	// }

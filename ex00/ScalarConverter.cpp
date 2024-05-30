#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter & src) {
	*this = src; }

ScalarConverter::~ScalarConverter() {}

ScalarConverter &	ScalarConverter::operator=(ScalarConverter const & rhs) {
	if (this != &rhs){}
	return *this; }


void floating(std::string literal) {
	try {
		float value = atof(literal.c_str());
		if (value == 0.0 && literal.find("0.0") == std::string::npos)
			throw (505);
		if (static_cast<char>(value) < 31 || static_cast<char>(value) == 127)
			std::cout << "char: Non displayable\n";
		else
			std::cout << "char: '" << static_cast<char>(value) << "'\n";
		if (value < -std::numeric_limits<int>::max() || value > std::numeric_limits<int>::max())
			std::cout << "int: Overflow" << "\n";
		else	
			std::cout << "int: " << static_cast<int>(value) << "\n";
		if (value < -std::numeric_limits<float>::max() || value > std::numeric_limits<float>::max())
			std::cout << "float: Overflow" << "\n";
		else {
			if (literal.find(".0") != std::string::npos && literal.find_first_of("123456789", literal.find(".0") + 2) == std::string::npos)
				std::cout << "float: " << value << ".0f\n";
			else
				std::cout << "float: " << value << "f\n";
		}
		if (value < -std::numeric_limits<double>::max() || value > std::numeric_limits<double>::max())
			std::cout << "double: Overflow" << "\n";
		else {
			if (literal.find(".0") != std::string::npos && literal.find_first_of("123456789", literal.find(".0") + 2) == std::string::npos)
				std::cout << "double: " << value << ".0\n"; 
			else
				std::cout << "double: " << value << "\n"; 
		}
	} catch (...) {
		std::cerr << "Invalid argument" << std::endl; } }



void doubleing(std::string literal) {
	try {
		double value = atof(literal.c_str());
		if (value == 0.0 && literal.find("0.0") == std::string::npos)
			throw(505);
		if (static_cast<char>(value) < 31 || static_cast<char>(value) == 127)
			std::cout << "char: Non displayable\n";
		else
			std::cout << "char: '" << static_cast<char>(value) << "'\n";
		if (value < -std::numeric_limits<int>::max() || value > std::numeric_limits<int>::max())
			std::cout << "int: Overflow" << "\n";
		else
			std::cout << "int: " << static_cast<int>(value) << "\n";
		if (value < -std::numeric_limits<float>::max() || value > std::numeric_limits<float>::max())
			std::cout << "float: Overflow" << "\n";
		else {
			if (literal.find(".0") != std::string::npos && literal.find_first_of("123456789", literal.find(".0") + 2) == std::string::npos)
				std::cout << "float: " << value << ".0f\n";
			else
				std::cout << "float: " << value << "f\n";
		}
		if (value < -std::numeric_limits<double>::max() || value > std::numeric_limits<double>::max())
			std::cout << "double: Overflow" << "\n";
		else {
			if (literal.find(".0") != std::string::npos && literal.find_first_of("123456789", literal.find(".0") + 2) == std::string::npos)	
				std::cout << "double: " << value << ".0\n";
			else
				std::cout << "double: " << value << "\n"; 
		}
	} catch (...) {
		std::cerr << "Invalid argument" << std::endl;} }



void int_char(std::string literal) {
	try {
		int value = atoi(literal.c_str());
		if ((value == 0 && literal.find("0") == std::string::npos) || (value == -1 && literal.find("-1") == std::string::npos))
			throw (505);
		if (static_cast<char>(value) < 31 || static_cast<char>(value) == 127)
			std::cout << "char: Non displayable\n";
		else
			std::cout << "char: '" << static_cast<char>(value) << "'\n";
		std::cout << "int: " << value << "\n";
		std::cout << "float: " << value << ".0f\n";
		std::cout << "double: " << value << ".0\n";
	} catch (...) {
		if (literal == "nan")
			std::cout << "char: Impossible\nint: Impossible\nfloat: nanf\ndouble: nan\n";
		else {
			if (atoi(literal.c_str()) == -1)
				std::cout << "char: Non displayable\n";
			else
				std::cout << "char: '" << literal << "'\n";
			std::cout << "int: Impossible\nfloat: Impossible\ndouble: Impossible\n"; }}}



void ScalarConverter::convert(std::string literal) {
	if (literal.find(".") != std::string::npos) {
		if (literal.find("f") != std::string::npos)
			floating(literal);
		else
			doubleing(literal); }
	else
		int_char(literal); }

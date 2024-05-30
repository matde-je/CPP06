#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
#include <stdint.h>


struct Data {
	int a;
};

class Serializer
{

	public:
		static uintptr_t serialize(Data* ptr); //takes a pointer and converts it to the unsigned integer type uintptr_t
		static Data* deserialize(uintptr_t raw); //takes an unsigned integer parameter and converts it to a pointer to Data

	private:
		Serializer();
		Serializer( Serializer const & src );
		~Serializer();
		Serializer &		operator=( Serializer const & rhs );

};


#endif 
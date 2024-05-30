#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer & src) {
	*this = src; }

Serializer::~Serializer() {}

Serializer &	Serializer::operator=(Serializer const & rhs)
{
	if (this != &rhs) {}
	return *this; }


//takes a pointer and converts it to the unsigned integer type uintptr_t
//reinterpret_cast operator is used to convert the pointer to any other type of pointer
//reinterpret_cast <new_type> (expression);
uintptr_t Serializer::serialize(Data* ptr) {
	return (reinterpret_cast <uintptr_t> (ptr));
}


//takes an unsigned integer parameter and converts it to a pointer to Data
Data* Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast <Data*> (raw));
}


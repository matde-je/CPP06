#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>

class Serializer
{

	public:

	private:
		Serializer();
		Serializer( Serializer const & src );
		~Serializer();
		Serializer &		operator=( Serializer const & rhs );

};

std::ostream &			operator<<( std::ostream & o, Serializer const & i );

#endif /* ****************************************************** SERIALIZER_H */
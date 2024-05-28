#include "ScalarConverter.hpp"


//static_cast<type> (expr) − The static_cast operator performs 
//a nonpolymorphic cast. For example, it can be used to cast a
// base class pointer into a derived class pointer.
//with extensions: pointer or reference to a derived class is additionally
// allowed to be cast to pointer or reference to unambiguous base class 
//(and vice versa) even if the base class is inaccessible 
//(that is, this cast ignores the private inheritance specifier). 
//Same applies to casting pointer to member to pointer to member of unambiguous non-virtual base;
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Invalid number of arguments\n";
        return  ;
    }
    int i = -1;
    while (argv[1][++i])
    {
        if ((argv[1][i] >= 0 && argv[1][i] <= 31) || argv[1][i] == 127)
        {
            std::cout << "Non displayable characters in input not allowed\n";
            return ;
        }
    }
    ScalarConverter::convert(argv[1]);

}
//characters with decimal values from 0 to 31, 
//as well as the character with decimal value 127 (DEL), 
//are considered non-displayable

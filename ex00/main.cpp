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
        return  1;
    }
    int i = -1;
    bool alpha = false;
    bool digit = false;
    while (argv[1][++i])
    {
        if (!std::isprint(argv[1][i]) || argv[1][i] == 127)
        {
            std::cerr << "Non displayable characters in input not allowed\n";
            return 1;
        }
        if (std::isalpha(argv[1][i]) && argv[1][i] != 'f')
            alpha = true;
        if (std::isdigit(argv[1][i]))
            digit = true;
        if (alpha == true && digit == true)
        {
            std::cerr << "Mix of letters and numbers not valid\n";
            return 1;
        }
    }
    ScalarConverter::convert(argv[1]);

}
//characters with decimal values from 0 to 31, 
//as well as the character with decimal value 127 (DEL), 
//are considered non-displayable

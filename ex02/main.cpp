#include "Base.hpp"

//upcasting
Base * generate(void) {
    Base *base;
    int ran = (rand() % 3) + 1;
    std::cout << ran << std::endl;
    switch (ran)
    {
        case 1:
            base = new A();
            break ;
        case 2:
            base = new B();
            break ;
        case 3:
            base = new C();
            break ;
    }
    return base;
}

void identify(Base* p){

    if (dynamic_cast<A*>(p) != 0)
        std::cout << "Is type A\n";
    else if (dynamic_cast<B*>(p) != 0)
        std::cout << "Is type B\n";
    else if (dynamic_cast<C*>(p) != 0)
        std::cout << "Is type C\n";
}

void identify(Base& p) {

    Base &b = p;

    try {
        b = dynamic_cast<A&>(p);
        std::cout << "Is type A\n";
    }
    catch (...){
        try {
            b = dynamic_cast<B&>(p);
            std::cout << "Is type B\n";
        }
        catch (...){
            try {
                b = dynamic_cast<C&>(p);
                std::cout << "Is type C\n";
            }
            catch (...){
                std::cout << "No type found\n";
            }
        }
    }
}

//To ensure that you get different random numbers each time you run the program,
//you should seed the random number generator 
int main() {
    srand(time(0));
    Base *a = generate();
    identify(a);
    identify(*a);
}
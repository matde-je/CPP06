
#include "Serializer.hpp"

//serialization is the process of converting an object into a sequence 
//of bytes so that it can be stored in memory or transmitted across a network 
//deserialization is the reverse process, 
//where the byte stream is used to reconstruct the original object
int main() {
    Data *a = new Data(); 

    a->a = 9;

    uintptr_t d = Serializer::serialize(a);
    Data *c = Serializer::deserialize(d);
    
    std::cout << c->a << std::endl;
    c->a = 10;
    std::cout << c->a << std::endl;

    delete a; }
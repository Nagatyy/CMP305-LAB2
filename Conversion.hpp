#ifndef Conversion_hpp
#define Conversion_hpp

#include <stdio.h>
#include "Stack.hpp"

const int divisors[3] = {2, 8, 16};

class Conversion{
    
private:
    StackType stack; // stores the converted digits
    int number;
    int conversionDivisor; // 2 for binary, 8 for octal, 16 for hexa

public:
//    constructor
    Conversion(int userNumber = 0);
    
//    setters
    void setConversionDivisor(int);
    void setNumber(int);
    void convert();
    StackType getStack();
     
    
};

#endif /* Conversion_hpp */

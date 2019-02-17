#include "Conversion.hpp"

//    constructor
Conversion::Conversion(int number){
    this -> number = number;
    conversionDivisor = 2; // is 2 by default
    // do i need to initialize stack here?
}

//    setters
void Conversion::setConversionDivisor(int conversionDivisor){
    this -> conversionDivisor = divisors[conversionDivisor];
}

void Conversion::setNumber(int number){
    this -> number = number;
}


void Conversion::convert(){
//    the remainder of each division is pushed into the stack
    
    while(number!=0){
        stack.Push(number%conversionDivisor);
        number = number / conversionDivisor;
    }
/*   note, the converted binary number will be pushed into the stack
 in reverse order but will appear correctly when outputed since
 the stack is also outputed in reverse order */
    
   
}

StackType Conversion::getStack(){
    return stack;
}


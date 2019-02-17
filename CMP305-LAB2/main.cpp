#include <iostream>
#include "Conversion.hpp"

const char hexaDigits[6] = {'A', 'B', 'C', 'D', 'E', 'F'};

int main() {
    
    
    StackType stack;
    Conversion number;
    int tempNum;
    int tempOption;
    
    std::cout << "Please enter a decimal: ";
    std::cin >> tempNum;
    number.setNumber(tempNum);
    
    std::cout << std::endl << "Conver the number from deciaml into: \n 0 - Binary \n 1 - Octal \n 2 - Hexadecimal \n Enter: ";
    std::cin >> tempOption;
    
    while(tempOption < 0 || tempOption > 2){
        std::cout << "That wasnt an option, please enter a valid option: ";
    }
    number.setConversionDivisor(tempOption);
    
    number.convert();
    stack = number.getStack();
    
    std::cout << stack;
    
    return 0;
}

/*
 Operator Description: Prints stack out in reverse order (as if being popped)
 Input:
 Output:
 */
ostream& operator << (ostream& outs, const StackType& stack){
    
    for(int i = stack.top; i >=0; i--){
        if(stack.items[i] >= 10)
            outs << hexaDigits[stack.items[i] - 10];
        else
            outs << stack.items[i];
    }

    outs << std::endl;
    return outs;
}

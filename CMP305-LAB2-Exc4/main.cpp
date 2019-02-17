#include <iostream>
#include "StackType.hpp"
#include "PostfixExp.hpp"

float evaluatePostFix();
void operation(StackType&, const char&);

int main() {
    
    std:: cout << evaluatePostFix() << std::endl;
    
    return 0;
}


float evaluatePostFix(){
    char c;
    float total;
    StackType stack;
    int multiplier = 1;
    int temp;
    
    std::cout << "Please Enter your Expression: ";
    
    while(std::cin.get(c) && c != '\n'){ // while there continues to be input and no new line char
//        we are reading the input string character by character using .get(char)
//        here we will evaluate the contents of the char c and take action accordingly
        
        if(c == ' '){
            // do nothing ie go to the next character
        }
        else if (isdigit(c)){
            stack.Push(c - int('0'));
            
            while(std::cin.get(c) && isdigit(c)){ // while a digit continues to be followed by another digit
                multiplier = 10;
                temp = stack.Top();
                stack.Pop();
                stack.Push((temp*multiplier + c) - int('0'));

            }
        }
        else if(c == '+' || c == '-' || c == '*' || c == '/'){
            switch (c) {
                case '+':
                    operation(stack, '+');
                    break;
                case '-':
                    operation(stack, '-');
                    break;
                case '*':
                    operation(stack, '*');
                    break;
                case '/':
                    operation(stack, '/');
                    break;
                default:
                    break;
            }
        }
        
        
        // if the char is an int, push it to the stack and read the next character
        // while there are other ints that follow, keep pushing them as the same element
        // if the char is a space, jump to the end
        // if the char is an operator, operate on the two ints now in the stack and combine them into one
        
        multiplier = 1;
    }
    
    total = stack.Top();

    
    return total;
}

// recieve a stack and add the top 2 elements together
void operation(StackType& stack, const char& op){
    int temp = stack.Top();
    stack.Pop();
    int temp2 = stack.Top();
    stack.Pop();
    if(op == '+')
       stack.Push(temp2 + temp);
    else if(op == '-')
        stack.Push(temp2 - temp);
    else if(op == '*')
        stack.Push(temp2 * temp);
    else if(op == '/')                // ADD / By 0
        stack.Push(temp2 / temp);
    
}




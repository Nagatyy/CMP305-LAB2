//#ifndef PostfixExp_hpp
//#define PostfixExp_hpp
//
//#include <stdio.h>
//#include <string>
////#include "StackType.hpp" why??
//
//
//class PostFixExp{
//private:
//    std::string expression;
//    StackType stack;
//public:
////    constructor
//    PostFixExp();
////    setters
//    void setExpression(std::string);
//    void evaluateExpression();
////    getters
//    std::string getExpression();
//    
//};
//
//#endif /* PostfixExp_hpp */
//
//
//
///*-------------------.cpp----------------*/
////    constructor
//PostFixExp::PostFixExp(){
//    expression = "";
//}
////    setters
//void PostFixExp::setExpression(std::string expression){
//    this -> expression = expression;
//}
//void PostFixExp::evaluateExpression(){
//    
//    
//    
//}
//std::string PostFixExp::getExpression(){
//    return expression;
//}



// to manipulate expression,
// if it is a digit, push it to the stack (CHECK IF FOLLOWED BY ANOTHER DIGIT)
// if it is a space, ignore it
// if it operator, apply it

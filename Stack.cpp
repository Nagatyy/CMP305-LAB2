//#include "Stack.hpp"
//
//
///*
// Author:
// Descrition: Implementation of Stack Class
// */
//
///*
// Function Description: Consructor with parameter max for max stack size
// Input: None
// Output: None
// */
//StackType::StackType(int max){
//    maxStack = max;
//    top = -1;
//    items = new ItemType [maxStack];
//}
///*
// Function Description: Default constructor setting max stack size to 500
// Input: None
// Output: None
// */
//StackType::StackType(){
//    maxStack = 500;
//    top = -1;
//    items = new ItemType [maxStack];
//}
///*
// Function Description: Copy Constructor
// Input: None
// Output: None
// */
//StackType::StackType(const StackType & original){
//    top = original.top;
//    maxStack = original.maxStack;
//    items = new ItemType[maxStack];
//    for (int i=0; i <= top; i++)
//        items[i] = original.items[i];
//}
//
///*
// Function Description:
// Input:
// Output:
// */
//StackType::~StackType(){
//    delete [] items;
//}
//
///*
// Function Description:
// Input:
// Output:
// */
//bool StackType::IsEmpty() const{
//    return top == -1;
//}
//
//bool StackType::IsFull() const{
//    return (top == maxStack-1);
//}
///*
// Function Description:
// Input:
// Output:
// */
//Error_Code StackType::Push(ItemType newItem){
//    if (IsFull())
//        return Overflow;
//    top++;
//    items[top] = newItem;
//    return Success;
//}
//
///*
// Function Description:
// Input:
// Output:
// */
//Error_Code StackType::Pop(){
//    if (IsEmpty())
//        return Underflow;
//    top--;
//    return Success;
//}
///*
// Function Description:
// Input:
// Output:
// */
//Error_Code  StackType::Top(ItemType& item) const{
//    if (IsEmpty())
//        return Underflow;
//    item  = items[top];
//    return Success;
//}
///*
// Function Description:
// Input:
// Output:
// */
//void StackType::clear(){
//    top = -1;
//  
//}
///*
// Operator Description:
// Input:
// Output:
// */
//StackType StackType::operator = (const StackType& other){
////    first check for self assignment
//    if(this == &other)
//        return *this;
////    then check if dynamically allocated memory is different
//    if(maxStack != other.maxStack){
//        maxStack = other.maxStack;
//        delete[] items;
//        items = new ItemType[maxStack];
//    }
////    now that their allocations match, proceed
//    top = other.top;
//    for(int i = 0; i <= top; i++)
//        items[i] = other.items[i];
//    
//    return *this;
//}




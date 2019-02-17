//
//#ifndef StackType_hpp
//#define StackType_hpp
//
//#include <stdio.h>
//
//typedef int ItemType;
//
//class FullStack {};
//class EmptyStack {};
//
//struct NodeType{
//    ItemType info;
//    NodeType* next;
//};
//
//class StackType{
//    
//private:
//    NodeType* topPtr;
//    
//public:
//    StackType();
//    StackType(const StackType&);
//    ~StackType();
//    
//    void Push(ItemType newItem);
//    void Pop();
//    ItemType Top();
//    
//    bool IsFull() const;
//    bool IsEmpty() const;
//    
//    // for Exc 3
//    bool hasDuplicate();
//
//};
//
//
//#endif /* StackType_hpp */
//
//StackType::StackType()    // Class constructor.
//{
//    topPtr = NULL;
//}
//
//StackType::~StackType()
//// Post: stack is empty; all items have been deallocated.
//{
//    NodeType* tempPtr;
//    
//    while (topPtr != NULL)
//    {
//        tempPtr = topPtr;
//        topPtr = topPtr->next;
//        delete tempPtr;
//    }
//}
//
//
//void StackType::Push(ItemType newItem)
//// Adds newItem to the top of the stack.
//// Stack is bounded by size of memory.
//// Pre:  Stack has been initialized.
//// Post: If stack is full, FullStack exception is thrown;
////       else newItem is at the top of the stack.
//
//{
//    if (IsFull())
//        throw FullStack();
//    else
//    {
//        NodeType* location; // create a new pointer to a node
//        location = new NodeType; // allocate memory
//        location->info = newItem; // fill it with the new item
//        location->next = topPtr; // have its internal pointer point to topPtr (ie the now 2nd element)
//        topPtr = location; // have topPtr point to the new node
//    }
//}
//void StackType::Pop()
//// Removes top item from Stack and returns it in item.
//// Pre:  Stack has been initialized.
//// Post: If stack is empty, EmptyStack exception is thrown;
////       else top element has been removed.
//{
//    if (IsEmpty())
//        throw EmptyStack();
//    else
//    {
//        NodeType* tempPtr;
//        tempPtr = topPtr;
//        topPtr = topPtr->next;
//        delete tempPtr;
//    }
//}
//
//ItemType StackType::Top()
//// Returns a copy of the top item in the stack.
//// Pre:  Stack has been initialized.
//// Post: If stack is empty, EmptyStack exception is thrown;
////       else a copy of the top element is returned.
//{
//    if (IsEmpty())
//        throw EmptyStack();
//    else
//        return topPtr->info;
//}
//
//bool StackType::IsFull() const
//// Returns true if there is no room for another ItemType
////  on the free store; false otherwise.
//{
//    NodeType* location;
//    try
//    {
//        location = new NodeType;
//        delete location;
//        return false;
//    }
//    catch(std::bad_alloc exception)
//    {
//        return true;
//    }
//}
//
//bool StackType::IsEmpty() const
//{
//    return (topPtr == NULL);
//}
//// Returns true if a duplicate item exists in the stack, false otherwise
//// Pre:  Stack has been initialized.
//// Post: If stack is empty, EmptyStack exception is thrown;
////       T or F are returned
//// NOTE: False is still returned in the case of an empty stack
//bool StackType::hasDuplicate(){
//    NodeType* tempPtr1;
//    NodeType* tempPtr2;
//
//    if(IsEmpty())
//        throw EmptyStack();
//    else{
//        tempPtr1 = topPtr; // make tempPtr1 point to the top element of the stack
//        while(tempPtr1 != NULL){
//            tempPtr2 = tempPtr1 -> next; // tempPtr2 points to the element after that pointed at by ptr1
//            while(tempPtr2 != NULL){
//                if(tempPtr1-> info == tempPtr2-> info) // if a duplicated between elements exists
//                    return true;
//                else{
//                    tempPtr2 = tempPtr2 -> next; // otherwise, move ptr2 to the next element
//                }
//            }
//            // once out of the inner while loop, move ptr1 to the next element
//            tempPtr1 = tempPtr1 -> next;
//            
//        }
//    }
////    if true if never returned, then there are no duplicates
//    return false;
//}
//*/
//

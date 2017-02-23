#ifndef Array_h
#define Array_h

#include "Node.hpp"
#include <assert.h>
#include <iostream>

using namespace std;

template<class Type>
class Array
{
private:
    Node<Type> front;
    int size;
public:
    Array();
    Array(int size);
    
    //Destructor
    ~Array<Type>();
    //Copy Constructor
    Array<Type>(const Array<T   ype> & toBeCopied);
    
    //Helper methods
    int getSize() const;
    Node<Type> * getFront() const;
    
    void setAtIndex(int index, Type value);
    Type getFromIndex(int index);
    
};

template <class Type>
Array<Type> :: Array(const Array<Type> & toBeCopied)
{
    this->size = toBeCopied.getSize();
    
    //Build Data Structure
    this->front = new Node<Type>();
    for(int index = 1; index < size; index++)
    {
        Node<Type> * temp = new Node<Type>();
        temp->setNodePointer(front);
        front = temp;
    }
    //Copy values into new array.
    //This could be done at the same time as the build step
    //but this is easier to explain.
    Node<Type> * copyTemp = toBeCopied.getFront();
    Node<Type> *updated = this->front;
    for(int index = 0; index < size; index++)
    {
        updated->setNodeData(copyTemp->getNodeData());
        updated = updated->getNodePointer();
        copyTemp = copyTemp->getNodePointer();
    }
}
/*
 The const modifier at the end of the method is used to denote that the
 method does not impact the state of the object.
 */
tempate <class Type>
Node<Type> * Array<Type> :: getFront() const
{
    return front;
}
#endif /*Array_h*/

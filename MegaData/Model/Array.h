#ifndef Array_h
#define Array_h

#include "Node.hpp"
#include <assert.h>

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
    Array<Type>(const Array<Type> & toBeCopied);
    
    //Helper methods
    int getSize() const;
    Node<Type> * getFront() const;
    
    void setAtIndex(int index, Type value);
    Type getFromIndex(int index);
    
};

template <class Type>
#endif /*Array_h*/

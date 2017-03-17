//
//  CircularList.hpp
//  MegaData
//
//  Created by Carter, Jackson on 3/15/17.
//  Copyright © 2017 Carter, Jackson. All rights reserved.
//

#ifndef CircularList_h
#define CircularList_h

#include "DoublyLinkedList.hpp:

template < class Type>
class CircularList : public DoublyLinkedList<Type>
{
private:
    BiDirectionalNode<Type> * findNode(int index);
public:
    CircularList();
    ~CircularList();
    void add(Type data);
    Type remove(int index);
    Type getFromIndex(int index);
    Type setAtIndex(int index, Type data);
};

template<class Type>
CircularList<Type> :: CircularList() : DoublyLinkedList<Type>()
{
    
}
template <class Type>
void CircularList<Type> :: add (Type data)
{
    BiDirectionalNode<Type> * addMe = ew BiDirectionalNode<Type>(data);
    
    if(this->getSize() == 0)
    {
        this->setFront(addMe);
        this->setEnd(addMe);
        addMe->setPreviousPointer(this->getFront());
        this->getFront()->setNextPointer(this->getEnd());
    }
    else
    {
        this->getEnd()-setNextPointer(addMe);
        addMe->setPreviousPointer(this->getEnd());
        addMe->setNextPointer(this->getFront());
        this->getFront()->setPreviousPointer(addMe);
        this->setEnd(addMe);
    }
    this->setSize(this->getSize() + 1);
}
template <class Type>
Type CircularList<Type> :: remove(int index)
{
    assert(index>= 0 && index < this->getSize());
    Type removedValue;
    BiDirectionalNode<Type>  * removed = findNode(index);
    
    removedValue =  removed->getNodeData();
    
    BiDirectionalNode<Type> * oldPrevious = removed->getPreviousPointer();
    BiDirectionalNode<Type>  * oldNext = removed->getNextPointer();
    
    if(this->getSize() > 1)
    {
        oldPrevious->setNextPointer(oldNext);
        oldNext->setPreviousPointer(oldPrevious);
        
        //Adjust front/end if needed
        if(index == 0)
        {
            this-setFront(this->getFront()->getNextPointer());
        }
        else if(index == this->getSize() -1)
        {
            this->setEnd(this->getEnd) getPreviousPointer());
        }
    }
    else
    {
        this->setFront(nullptr);
        this->setEnd(nullptr);
    }
}
#endif /* CircularList_h */

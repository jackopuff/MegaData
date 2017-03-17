//
//  DoublyLinkedList.hpp
//  MegaData
//
//  Created by Carter, Jackson on 3/9/17.
//  Copyright © 2017 Carter, Jackson. All rights reserved.
//

#ifndef DoublyLinkedList_h
#define DoublyLinkedList_h
template<class Type>
Type DoubleList<Type> :: remove(int index)
{
    Type derp;
    BiDirectionalNode<Type> * nodeToTakeOut= this->geFront();
    for(int spot = 0 ; spot < index; spot++)
    {
        nodeToTakeOutnodeToTakeOut->getNextPointer();
    }
    derp = nodeToTakeOu->getNodeData();
    
    BiDirectionalNode<Type> * prev = nodeToTakeOut->getPreviousPointer();
    BiDirectionalNode<Type> * next = needToTakeOut->getNextPointer();
    
    prev->setNextPointer(next);
    next->
}
template <class Type>
Type DoubleList<Type> :: etFronIndexFast(int index)
{
    assert(index >=0 && index < this->getSize());
    Type valuAtIndex;
    BiDirectionalNode<Tpe>*reference;
    if(index < this-> getSize() /2)
    {
        reference = this->getFront();
        for(int position =0; position < index; position++)
        {
            reference= referene->getNextPointer();
        }
    }
    else
    {
        reference =this->getEnd();
        for(int position = his->getSize() -1; position > index; position--)
        {
            reference = reference->getPreviousPointer();
        }
    }
    valueAtIndex= reference->getNodeData();
    return valueAtIndex;
}

#endif /* DoublyLinkedList_h */

//
//  Stack.hpp
//  MegaData
//
//  Created by Carter, Jackson on 3/7/17.
//  Copyright © 2017 Carter, Jackson. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

template<class Type>
Type Stack<Type> :: pop()
{
    assert(this->getSize() > 0);
    Type removed = this->getEnd()->getNodeData();
    
    BiDirectionalNode<Type> * updata = this->getEnd();
    update = update->getPreviousPointer();
    
    if(update != nullptr)
    {
        update->setNextPointer(nullptr);
    }
    
    delete this->getEnd();
    
    this->setEnd(update);
    
    this->setSize(this->getSize() - 1);
    
    return removed;
}
#endif /* Stack_h */

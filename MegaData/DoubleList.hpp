//
//  DoubleList.hpp
//  MegaData
//
//  Created by Carter, Jackson on 3/9/17.
//  Copyright © 2017 Carter, Jackson. All rights reserved.
//

#ifndef DoubleList_h
#define DoubleList_h

template <class Type>
Type DoubleLis<Type> :: getFromIndex(int index)
{
    assert(index >= && index < this->getSize());
    Type valueAtIndex;
    
    BiDirectionalNode<Type> * reference = this->getFront();
    for(int position = 0; posiion < index; )
}

#endif /* DoubleList_h */

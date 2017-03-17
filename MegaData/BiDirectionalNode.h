//
//  BiDirectionalNode.h
//  MegaData
//
//  Created by Carter, Jackson on 2/27/17.
//  Copyright © 2017 Carter, Jackson. All rights reserved.
//

#ifndef BiDirectionalNode_h
#define BiDirectionalNode_h

template<class Type>
class BiDirectionalNode : public Node<Type>
{
private:
    BiDirectionalNode<Type> * previous;
    BiDirectionalNode<Type> * next;
    Type data;
public:
    BiDirectionalNode();
    BiDirectionalNode(Type data);
    BiDirectionalNode(Type data, BiDirectionalNode<Type> * previous, BiDirectionalNode<Type> * next);
}
template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode() : Node()
{
    this->nextPointer = nullpr;
    this->previous = nullptr;
}
template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode() : Node<Type>(data)
{
    this->nextPointer = nullptr;
    this->previous = nullptr;
}
#endif /* BiDirectionalNode_h */



#ifndef Node_hpp
#define Node_hpp

template <class type>
class Node
{
private:
    Type nodeData;
    Node<Type> * nodePointer;
public:
    Node();
    Node(Type nodeData);
    Node(Type data, Node<Type> * next);
    
    void setNodeData(Type data);
    void setNodePointer(Node<Type> pointer);
    Type getNodeData();
    Node<Type> * getNodePointer();
};
/*
 Implementation section
 */

template <class Type>
Node<Type> :: Node()
{
        //Explicitly DO NOT instantiate the nodeData data member
    this->nodePointer = nullptr;
}

template <class Type>
Node<Type> :: Node(Type data)
{
    this->nodeData = data;
    this->nodePointer = nullptr;
}
template <class Type>
Node<Type> * Node<Type> :: getNodePointer()
{
    return this->nodePointer;
}

#endif /* Node_hpp*/

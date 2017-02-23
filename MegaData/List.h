//
//  List.h
//  MegaData
//
//  Created by Carter, Jackson on 2/23/17.
//  Copyright © 2017 Carter, Jackson. All rights reserved.
//

#ifndef List_h
#define List_h
#include <iostream>
#include "../Model/Node.h"
#include"../Controller/DataStructureController.hpp"
#include <assert.h>

using namespace std;

template <class Type>
class List
{
private:
    int size;
    Node<Type>*front;
public:
    List<Type>();
    
    //Destructor
    ~List<Type>():
    //CopyConstructor
    List<Type>(const List<Type> & source);
    //HelperMethods
    void addAtIndex(int index, Type value);
    void add(Type value);
    Type remove(int index);
    Type setAtIndex(int index, Type data);
    bool contains(Type data);
    int getSize() const;
    Node<Type>* getFront() const;
};
template <class Type>
Node<Type>*List<Type> getEnd() const
    {}
template <class Type>
    void List<Type> addAtIndex(int index, Type value)
    {
        Node<Type> * added = new Node<Type>(data);
        if(size==0)
        {
            this->front = added;
            this->end = added;
        }
        else
        {
            end->setNodePointer(added);
            this->end = added;
        }
        size++;
    }
#endif /* List_h */

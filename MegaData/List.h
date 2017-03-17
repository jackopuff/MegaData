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
#include "/Users/jcar8281/Documents/C++/MegaData/MegaData/Model/Node.hpp"
#include"/Users/jcar8281/Documents/C++/MegaData/MegaData/Controller/DataStructureController.hpp"
#include "assert.h"

using namespace std;

template <class Type>
class List
{
private:
    int size;
    Node<Type>*end;
    Node<Type>*front;
public:
    List();
    List(const List<Type> & source);
    //Destructor
    ~List<Type>():

    //HelperMethods
    void addAtIndex(int index, Type value);
    Type setAtIndex(int index, Type data);
    Type getFronIndex(int index);
    void addFront(Type value);
    Type remove(int index);
    
    bool contains(Type data);
    int getSize() const;
    Node<Type>* getFront() const;
};
template <class Type>
    Node<Type>*List<Type> getEnd() const;
    {
    }
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

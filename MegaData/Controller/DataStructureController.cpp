//
//  DataStructureController.cpp
//  MegaData
//
//  Created by Carter, Jackson on 2/8/17.
//  Copyright © 2017 Carter, Jackson. All rights reserved.
//

#include "DataStructureController.hpp"
#include <iostream>
#include "../Model/IntNode.hpp"
#include "../Model/IntNodeArray.hpp"
#include "List.h"
#include "../Model/Array.h"
#include "../Model/IntNodeArray.hpp"
#include "../Model/Stack.hpp"
#include "../Model/Queue.hpp"
using namespace std;

DataStructureController:: DataStructureController()
{
    wordNode = Node<string>("derpy mcderpface");
    numberNode = Node<int>();
}
void DataStructureController:: testNodes()
{
    
}

void DataStructureController :: start()
{
    cout << "Starting the project"<<endl;
    
    cout << "Switching to the array testing" << endl;
    testIntArray();
    cout << "Finished testing" << endl;
}

void DataStructureController :: testListTiming()
{
    
}
void DataStructureController :: testIntArray()
{
    cout << "Testing the array " << endl;
    
    IntNodeArray temp = IntNodeArray(3);
    
    for(int index = 0; index <3;index++)
    {
        cout << temp.getFromIndex(index) << " is at spot " << index << endl;
    }
    cout << "Testing input" << endl;
    
    for(int index = 0 ; index< 3; index++)
    {
        temp.setAtIndex(index, index);
    }
    
    for(int index = 0; index < temp.getSize(); index ++)
    {
        cout << temp.getFromIndex(index) << "is at spot " << index << endl;
    }
}
void DataStructureController:: testListIntro()
{
    List<int> sample;
    sample.addFront(2);
    sample.addEnd(3);
    sample.addFront(1);
    cout << "This should go 1, 2, 3" << endl;
    
    for(int index = 0; index < sample.getSize(); index++)
    {
        cout<< sample.getFromIndex(index) << endl;
    }
    
    cout << "Size should read 3 and is " << sample.getSize() << endl;
}

void DataStructureController::testFoodQueue()
{
    Queue<FoodIem> tastyFood;
    FoodItem Toing("a delicious  meal from marcel toing proud owner of restaurant ratatoing");
    
    tastyFood.enqueue(Toing);
    FoodItem boring;
    tastyFood.add(boring);
    
    FoodItem removed = tastyFood.dequeue();
    cout << "The item removed from the queue was :" << removed.getFoodName() << "and should be: a delicious meal from marcel toing proud owner of restaurant ratatoing"<< endl;
}


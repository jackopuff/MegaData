//
//  FoodItem.cpp
//  MegaData
//
//  Created by Carter, Jackson on 3/13/17.
//  Copyright © 2017 Carter, Jackson. All rights reserved.
//

#include "FoodItem.hpp"

FoodItem ::FoodItem()
{
    this->calories = 999;
    this->foodName  = "blah blah";
    this->cost = 1234.21;
    this->delicious = false;
}

FoodItem :: FoodItem(string name)
{
    this->foodName= name;
    this->cost = 4236.29;
    this->calories = 23;
    this->delicious = true;
}

int FoodItem :: getCalories()
{
    return calories;
}

double FoodItem :: getCost()
{
    return cost;
}
string FoodItem :: getFoodName()
{
    return foodName;
}

bool FoodItem :: isDelicious()
{
    return delicious;
}

void FoodItem :: setCalories(int calories)
{
    this->calories= calories;
}

void FoodItem :: setCost(double cost)
{
    this->cost = cost;
}

void FoodItem::setDelicious(bool delicious)
{
    this->delicious = delicious;
}

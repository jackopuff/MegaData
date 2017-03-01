//
//  DataStructureController.hpp
//  MegaData
//
//  Created by Carter, Jackson on 2/8/17.
//  Copyright © 2017 Carter, Jackson. All rights reserved.
//

#ifndef DataStructureController_hpp
#define DataStructureController_hpp

#include "../Model/Node.hpp"
#include "../Model/Array.h"
#include <string>

class DataStructureController
{
private:
    void testIntArray();
    void testListIntro();
    Node<int> numberNode;
    Node<string> wordNode;
    void testNodes();
public:
    DataStructureController();
    void start();
};


#endif /* DataStructureController_hpp */

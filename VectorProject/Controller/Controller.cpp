//
//  Controller.cpp
//  VectorProject
//
//  Created by Ylst, Zachary on 1/29/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"
#include <vector>

using namespace std;

Controller :: Controller()
{
    
}

void Controller :: start()
{
    vector<int> intVector(5);
    intVector = { 1, 2, 4, 8, 16 };
    
    for (int index = 0; index < 5; index++)
    {
        cout << intVector[index] << endl;
    }
    
    vector<string> stringVector(2);
    stringVector = { "Yeah", "boiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii" };
    
    cout << stringVector[0] << " " << stringVector[1] << endl;
}

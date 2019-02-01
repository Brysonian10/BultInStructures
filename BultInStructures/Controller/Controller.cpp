//
//  Controller.cpp
//  BultInStructures
//
//  Created by Spaulding, Bryson on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"
void Controller :: start()
{
//stuff
    vector<int> intVector;
    intVector.push_back(2);
    intVector.push_back(3);
    intVector.push_back(22);
    
    
    vector<string> stringVector;
    string vectorCopy [stringVector.size()];
    stringVector.push_back("this");
    stringVector.push_back("is");
    stringVector.push_back("difficult");
    
    for (int i = 0; i < intVector.size(); ++i)
    {
        cout << intVector[i] << endl;
        
        
    }
    
    for (int i = 0; i < stringVector.size(); ++i)
    {
        cout << stringVector[i] << endl;
        vectorCopy[i] = stringVector[i];
        
    }
    

    
};

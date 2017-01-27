//
//  FirstController.cpp
//  SampleFirstProject
//
//  Created by Nazir, Ammar on 1/23/17.
//  Copyright © 2017 Nazir, Ammar. All rights reserved.
//

#include <iostream>
#include "FirstController.h"

using namespace std;

void FirstController :: start()
{
    cout << "words go here" << endl;
    int myAge = 17;
    cout << "I am " << myAge << " years old." << endl;
    cout << "\n";
    
    specialOutput();
}

void FirstController :: specialOutput()
{
    cout << "how old are you?" << endl;
    int yourAge;
    cin >> yourAge;
    cout << "oh, so you are " << yourAge << " years old!"<< endl;
    string myName;
    cin.ignore();
    cout << "Type in your name" << endl;
    getline (cin, myName);
    cout << "you typed: " << myName << endl;
    cout << "Type in your name and age" << endl;
    cin >> myName >> yourAge;
    cout << "you typed: " << myName << " and " << yourAge << endl;
}

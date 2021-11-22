//
//  main.cpp
//  InputOutput
//
//  Created by Vedant Mistry on 22/11/21.
//

//input output in c++

#include <iostream>
using namespace std;

int main(){
    cout << "This is a string\n"; //String output
    int age = 19;
    cout << "This is an int\n" << age; //Int output
    float number1 = 19.99;
    cout << "This is a float number\n" << number1; //Float output
    double number2 = 19.90909090;
    cout << "This is a double number\n" << number2; //Double output
    
    int input_number;
    cin >> input_number;
    cout << "This is user entered number\n" << input_number; //entering a single input
    
    char character;
    int place_holder;
    cin >> character >> place_holder;  //taking multiple inputs
    cout << character << " " << place_holder;
    
    return 0;
}

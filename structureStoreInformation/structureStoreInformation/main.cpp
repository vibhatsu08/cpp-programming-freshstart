#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    long long rollNumber;
    char grade;
};

int main (){
    //cpp program to write a structure to store information
    Student student1;
    
    cout << "Enter the name of student 1: \n";
    cin >> student1.name;
    
    cout << "Enter the age of " << student1.name << endl;
    cin >> student1.age;
    
    cout << "Enter the roll number of " << student1.name << endl;
    cin >> student1.rollNumber;
    
    cout << "Enter the grade of " << student1.name << endl;
    cin >> student1.grade;
    
    
    cout << student1.name << endl;
    cout << student1.age << endl;
    cout << student1.rollNumber << endl;
    cout << student1.grade << endl;
    
    return 0;
}

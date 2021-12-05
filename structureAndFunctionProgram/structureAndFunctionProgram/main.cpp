#include <iostream>
using namespace std;

struct Person {
    char name[50];
    int age;
    long salary;
};

void displayInfo (Person);

int main (){
    Person p;
    
    cout << "Enter the name of the student: " << endl;
    cin.get(p.name, 50);
    cout << "Enter the age of the student: " << endl;
    cin >> p.age;
    cout << "Enter the salary of the student: " << endl;
    cin >> p.salary;
    
    displayInfo(p);
    
    return 0;
}

void displayInfo (Person p){
    cout << "Displaying information: " << endl;
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Salary: " << p.salary << endl;
}

#include <iostream>
using namespace std;

struct Person {
    char name[50];
    int age;
    double salary;
};

int main (){
    Person p1;
    
    cout << "Enter full name: " << endl;
    cin.get(p1.name, 50);
    cout << "Enter the age: " << endl;
    cin >> p1.age;
    cout << "Enter the salary: " << endl;
    cin >> p1.salary;
    
    cout << "Displaying information: " << endl;
    cout << p1.name << endl;
    cout << p1.age << endl;
    cout << p1.salary << endl;
    
    return 0;
}

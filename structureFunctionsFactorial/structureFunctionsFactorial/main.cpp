#include <iostream>
using namespace std;

struct Factorial {
    int num;
    int fact=1;
};

int findFactorial (Factorial test1);

int main (){
    //program to find the factorial of a number using structures and recursion
    Factorial test1;
    cout << "Enter a random number: " << endl;
    cin >> test1.num;
    cout << "The factorial of the given number " << test1.num << " is ";
    findFactorial(test1);
    cout << test1.fact;
}

int findFactorial (Factorial test1){
    for (int i=1; i<=test1.num; i++){
        test1.fact *= i;
    }
    
    return test1.fact;
}

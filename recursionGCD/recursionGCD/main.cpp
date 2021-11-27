#include <iostream>
using namespace std;

int findGCD (int, int);

int main (){
    int number1, number2;
    cin >> number1 >> number2;
    
    int result = findGCD(number1, number2);
    cout << result << endl;
    
    return 0;
}

int findGCD (int num1, int num2){
    if (num1 > 1 && num2 > 1){
        return findGCD(num2, num1 % num2);
    }
    else {
        return num1;
    }
}

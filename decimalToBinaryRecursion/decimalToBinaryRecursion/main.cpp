#include <iostream>
using namespace std;

int convert (long long);

int main (){
    long long binary_number;
    cin >> binary_number;
    
    cout << convert(binary_number) << endl;
    
    return 0;
}

int convert (long long b_n){
    int decimal_number = 0, remainder = 0;
    int i = 1;
    
    while (b_n != 0){
        remainder = b_n % 2;
        decimal_number += remainder * i;
        b_n /= 2;
        
        i *= 10;
    }
    
    return decimal_number;
}

#include <iostream>
#include <cmath>
using namespace std;

int convert (long long);

int main (){
    long long binary_num;
    cin >> binary_num;
    
    cout << convert(binary_num) << endl;
    
    return 0;
}

int convert (long long b_n){
    int decimal_num = 0, remainder = 0, i = 0;
    
    while (b_n != 0){
        remainder = b_n % 10;
        decimal_num += remainder * pow(2, i);
        b_n /= 10;
        i++;
    }
    
    return decimal_num;
}

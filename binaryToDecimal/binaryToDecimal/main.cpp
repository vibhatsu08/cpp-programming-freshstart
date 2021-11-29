#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int n;
    cin >> n;
    
    long long binary_num = 0, remainder = 0;
    int i = 1;
    
    while (n != 0){
        remainder = n % 2;
        binary_num += remainder * i;
        n /= 2;
        
        i *= 10;
    }
    
    cout << binary_num << endl;
}

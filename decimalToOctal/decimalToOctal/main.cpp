#include <iostream>
using namespace std;

int main (){
    int decimal_num;
    cout << "Enter a decimal number: " << endl;
    cin >> decimal_num;
    
    int octal_num = 0, remainder;
    int i = 1;
    
    while (decimal_num != 0){
        remainder = decimal_num % 8;
        octal_num += remainder * i;
        decimal_num /= 8;
        
        i *= 10;
    }
    
    cout << octal_num;
    
    return 0;
}

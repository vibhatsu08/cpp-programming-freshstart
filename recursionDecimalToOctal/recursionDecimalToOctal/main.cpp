#include <iostream>
using namespace std;

int convert (int);

int main (){
    int decimal_num;
    cout << "Enter a random number: " << endl;
    cin >> decimal_num;
    
    cout << convert(decimal_num) << endl;
    
    return 0;
}

int convert (int decimal_num){
    int octal_num = 0, remainder = 0;
    int i = 1;
    
    while (decimal_num != 0){
        remainder = decimal_num % 8;
        octal_num += remainder * i;
        decimal_num /= 8;
        
        i *= 10;
    }
    
    return octal_num;
}

#include <iostream>
using namespace std;

int main (){
    int numbers[10];
    
    for (int i=1; i<=10; i++){
        cin >> numbers[i];
    }
    
    for (const int &n: numbers){
        cout << numbers[n];
    }
    return 0;
}


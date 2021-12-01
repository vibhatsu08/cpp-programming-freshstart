#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    
    int xi[n], fi[n];
    for (int i=0; i<n; i++){ //taking input for xi and fi
        cin >> xi[i] >> fi[i];
    }
    
    //calculating fi*xi
    //printing
    for (int i=0; i<n; i++){
        cout << xi[i] * fi[i];
    }
    
    //calculating 
    
    int xBar = 0;
}

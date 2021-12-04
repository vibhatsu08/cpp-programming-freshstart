#include <iostream>
using namespace std;

int main (){
    char str[200], newString;
    gets(str);
    long length = strlen(str);
    
    for (int i=0; i<length; i++){
        for (int j=0; j<(length-1); j++){
            if (str[j] > str[j + 1]){
                newString = str[j];
                str[j] = str[j + 1];
                str[j + 1] = newString;
            }
        }
    }
    
    cout << str << endl;
    
    return 0;
}

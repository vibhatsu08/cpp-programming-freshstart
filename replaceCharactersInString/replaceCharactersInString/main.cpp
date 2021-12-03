#include <iostream>
using namespace std;

int main (){
    string str;
    getline(cin, str);
    string temp = "";
    for (int i=0; i<str.size(); i++){
        if (str[i] >= 'a' && str[i] <= 'z'){
            temp += str[i];
        }
    }
    cout << temp;
    
    return 0;
}

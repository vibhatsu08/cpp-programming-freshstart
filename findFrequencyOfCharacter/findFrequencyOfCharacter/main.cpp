#include <iostream>
using namespace std;

int main (){
    string str;
    getline(cin, str);
    char ch = 'a';
    int count = 0;
    
    for (int i=0; i<str.size(); i++){
        if (str[i] == ch){
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}

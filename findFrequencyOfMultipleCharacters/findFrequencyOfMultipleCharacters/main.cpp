#include <iostream>
using namespace std;

int main (){
    string str;
    getline(cin, str);
    
    int vowels = 0, consonants = 0, whitespaces = 0;
    for (int i=0; i<str.size(); i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            vowels++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z'){
            consonants++;
        }
        else if (str[i] == ' '){
            whitespaces++;
        }
    }
    
    cout << "Vowels : " << vowels << endl;
    cout << "Consonants : " << consonants << endl;
    cout << "Whitespaces : " << whitespaces << endl;
    
    return 0;
}

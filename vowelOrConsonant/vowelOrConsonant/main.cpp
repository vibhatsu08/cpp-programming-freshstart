//
//  main.cpp
//  vowelOrConsonant
//
//  Created by Vedant Mistry on 23/11/21.
//

//program to check if a given character is a vowel or a consonant

#include <iostream>
using namespace std;

int main(){
    char alpha;
    cin >> alpha;
    
    if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u'){
        cout << "vowel";
    }
    else if(alpha >= 'a' && alpha <= 'z'){
        cout << "consonant";
    }
    
    return 0;
}

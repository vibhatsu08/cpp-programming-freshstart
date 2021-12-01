#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    
    int arr[n];
    
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    //printing the elements of the array
    
    
    int maxElement = 0;
    
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (arr[j] > arr[i]){
                maxElement = arr[j];
            }
        }
    }
    
    cout << maxElement << endl;
    
    return 0;
}

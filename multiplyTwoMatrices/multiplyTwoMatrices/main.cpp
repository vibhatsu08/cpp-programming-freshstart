#include <iostream>
using namespace std;

int main (){
    int r, c;
    //input for rows and columns
    cout << "Enter the numnber of rows and columns: " << endl;
    cin >> r >> c;
    
    int arr1[r][c], arr2[r][c];
    //taking input for the first matrix
    cout << "Enter the elements for the first matrix: " << endl;
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cin >> arr1[i][j];
        }
    }
    //taking input for the second matrix
    cout << "Enter the elements for the second matrix: " << endl;
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cin >> arr2[i][j];
        }
    }
    
    int product[r][c];
    //product of the elements of the two matrices
    cout << "The product of the elements of the two matrices is: " << endl;
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            product[i][j] = arr1[i][j] * arr2[i][j];
            cout << product[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

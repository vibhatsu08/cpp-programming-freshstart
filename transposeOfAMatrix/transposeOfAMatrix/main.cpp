#include <iostream>
using namespace std;

int main (){
    int r, c;
    //input for rows and columns
    cin >> r >> c;
    
    //the given matrix
    int matrix[r][c];
    //taking input for the elements for the matrix
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cin >> matrix[i][j];
        }
    }
    
    //new matrix that holds the transpose of the given matrix
    int newMatrix[r][c];
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            newMatrix[i][j] = matrix[j][i];
        }
    }
    //printing the transpose matrix
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cout << newMatrix[i][j];
        }
        cout << endl;
    }
    
    return 0;
}

#include <iostream>
using namespace std;

struct AddDistances {
    int dist1; //in cms
    int dist2; //in cms
    int totalDist; //in ft and inches
    int totalDistFeet; //ft
    int totalDistInches; //inches
};

int main (){
    //cpp program to write a structure to add two distances
    AddDistances calc1;
    
    cout << "Enter the first distance: " << endl;
    cin >> calc1.dist1;
    cout << "Enter the second distance: " << endl;
    cin  >> calc1.dist2;
    cout << "Total distance: " << endl;
    calc1.totalDist = calc1.dist1 + calc1.dist2;
    calc1.totalDistFeet = calc1.totalDist/30; //converting cms to feet
    calc1.totalDistInches = calc1.totalDist%30; //obtaining the remainder
    calc1.totalDistInches = calc1.totalDistInches/2.54;
    cout << calc1.totalDist << endl;
    cout << calc1.totalDistFeet << " feet " << calc1.totalDistInches << " inches" << endl;
    
    return 0;
}

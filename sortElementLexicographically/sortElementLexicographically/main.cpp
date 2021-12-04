#include<iostream>
using namespace std;
int main()
{
    char str[200], newString;
    long length;
    cout<<"Enter the String: ";
    gets(str);
    length = strlen(str);
    for(int i=0; i<length; i++)
    {
        for(int j=0; j<(length-1); j++)
        {
            if(str[j]>str[j+1])
            {
                newString = str[j];
                str[j] = str[j+1];
                str[j+1] = newString;
            }
        }
    }
    cout<<"\nString in Ascending Order: "<<str;
    cout<<endl;
    return 0;
}

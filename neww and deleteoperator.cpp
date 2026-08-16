#include <iostream>
using namesapce std;
int main()
{
    int *arr;
    int size;
    cout<<"Enter the size of integer array :";
    cin>>size;
    cout<<"creating array of size"<<size<<"..";
    arr =new int[size];
    cout<<"\nDynamic allocation of memory for array arr is succrssful.";
    delete arr;
    return 0;

}
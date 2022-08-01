#include<bits/stdc++.h>
using namespace std;
void printArray(int size,int *prefix)
{
    for(int i = 0; i<size; i++)
    {
        cout<<prefix[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int size;
    cin>>size;
    int *arr = new int[size] {0};
    int *prefix = new int[size] {0};

    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }
    int sum = 0,k = 0;
    for(int i = 0; i<size; i++)
    {
        sum += arr[i];
        prefix[k] = sum;
        k++;
    }
//    cout<<"Prefix array : ";
//    printArray(size,prefix);
    int start,End,Sum;
    cout<<"Index number x to y : ";
    cin>>start>>End;
    if(start == 0)
    {
        Sum = prefix[End];
    }
    else
    {
        Sum = prefix[End] - prefix[start-1];
    }
    cout<<Sum<<endl;

    return 0;
}

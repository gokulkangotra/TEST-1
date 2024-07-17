#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]= {1,2,3,4,5};

    int arraySize= sizeof(arr) / sizeof(arr[0]);
     for(int i = 0; i < arraySize; ++i) 
     {
        cout << arr[i] << std::endl;
        }
        return 0;
}
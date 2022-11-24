#include<iostream>
using namespace std;

int search(int arr[],int n , int key)
{
    for(int i =0;i<n;i++)
    
        if(arr[i]==key) { 
        return i;
        }

        return -1;
    
}
int main()
{

    int arr[5] = {1, 2, 4, 5, 7};
    int res = search(arr, 5, 3);
    cout << "index" << res;

    return 0;
}
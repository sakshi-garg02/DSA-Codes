#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
    
        cout<<arr[i]<<endl;
        
    }
}

void selection(int arr[],int n)
{
    for(int i =0;i<n-1;i++)
    {
            int mini= i;

        for(int j =i+1;j<n;j++)
        {
            if(arr[j]<=arr[mini])
            mini =j;
            
        }
        swap(arr[mini],arr[i]);
    }
}
int main(){

int arr[]= {1,5,75,3};
int n=4;

selection(arr,n);
print(arr,n);

return 0;
}
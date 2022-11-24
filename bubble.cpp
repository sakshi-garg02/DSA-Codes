#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}

void bubble(int arr[],int n)
{ 
for(int i =0;i<n-1;i++)
{
    for(int j=0;j<n-i;j++)
    {
        if(arr[j]>arr[j+1]) 
        { 
        swap(arr[j],arr[j+1]);
        }
    }
}
}

int main(){
    int data[]={1,2,3,4,9,6};
    int n=6;
    bubble(data,n);
    cout<<"sorted";
    print(data,n);

}
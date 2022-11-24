#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
void selection(int arr[],int n)
{
    for(int i=0;i<n;i++){ 
        int temp=arr[i];
    int j =i-1;
    for(;j>=0;j--)
    {
        if(arr[j]>temp)
        arr[j+1]=arr[j];

        else
        break;
    }
    arr[j+1]= temp;
    
}
}
int main(){
    int data[]={1,3,9,7};
    int n=4;
    selection(data,n);
    cout<<"array is";
    print(data,n);


return 0;
}
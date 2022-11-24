#include<iostream>
using namespace std;

struct Queue
{
    int *arr;
    int front;
    int rear;
    int size;

    Queue(int n)
    {
        front=rear=-1;
        arr= new int[size];
        size=n;
        
    }

    void enque(int data)
    {
        if ((front==0 && rear== size-1))
        {
            cout<<"queue is full";
        }
        else if(front ==-1)
        {
            front = rear =0;
        }
        else if(rear = size-1 && front != 0)
        {
            rear =0;
        }
        else{
            rear++;
        }
        arr[rear]=data;
        return data;

    }
    void deque()
    {
        if(front =-1)
        cout<<"queue is empty";

        int ans=arr[front];
        arr[front]=-1;

    }
    else if(front == size-1)
    {
        front=0;
    }
    else
    front++;

    return ans;
}

void display()
int main(){

return 0;
}
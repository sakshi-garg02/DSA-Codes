#include<iostream>
using namespace std;

struct queue
{

int *arr;
int front;
int rear;
int size;
int cap;

};
queue(int c)
{
    queue =new int(size);
    front=rear=0;
    cap =c;
    size=0;
}
bool isFull()
{
    return(cap==size);
}

bool isEmpty()
{
    return(size==0);
}
void enqueue(int )
{
    if(isFull())
    {
       cout<<"Queue is full";
    
    queue[size]= x;
    size++;
    }

}
void deque()
{
    if(isEmpty())
    cout<<"queue is empty";

    for(int i=0;i<size-1;i++)
    {
        queue[i]=queue[i+1];
        size--;
    }
}

void display()
{
    for(int i =0;i<size;i++)
    {
        cout<<("Queue is\n",queue[i]);
    cout<<("<--");
    }

}
int main(){

    queue q(4);

    int ch;
    

return 0;
}
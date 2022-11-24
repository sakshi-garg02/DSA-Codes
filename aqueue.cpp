#include<iostream>
using namespace std;

struct Queue
{
    int size,cap,rear,front;
    int *queue;

    Queue(int c)
    {
        front=rear=0;
        //cap=c;
        size=0;
        queue = new int(cap);
    }

    bool isFull()
    {
        return (cap==size);
    }
    bool isEmpty()
    {
        return (size==0);
    }
    void enque(int data)
    {
        queue[size]= data;
        size++;
    }
    void deque()
    {
        for(int i =0;i<size-1;i++)
        {
            queue[i]= queue[i+1];
            size--;
        }
    }
    void display()
    {
        for(int i =0;i<size;i++)
        {
             cout << ("Queue is \n ", queue[i]);
            cout << (" <-- ");
        }
    }

};
int main(){

int ch;
    Queue q(2);

    while(ch!= 4) 
    { 

    cout << "Menu \n";

    cout << "1. Push an Element.\n";
    cout << "2. Pop an Element.\n";
    cout << "3. Peek Stack.\n";
    cin >> ch;

    if (ch == 1)
    {
        q.enque(20);
    q.enque(30);
        cout << "pushed into queue";
    }

    else if (ch == 2)
    {
         q.deque();
        cout << "pop into stack";
    }

    else if (ch == 3)
    {
        q.display();
    }
    if(ch==4)
        cout << "wrong"; 
    }
        

}
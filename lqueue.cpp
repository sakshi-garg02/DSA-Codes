#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

//parameterised constructor
    Node(int x)
    {
        data =x;
        next = NULL;

    }

};
struct Queue
{
    Node *front,*rear ;

    // default constructor set front and rear as null 

    Queue()
    {
        front =NULL;
        rear=NULL;

    }

    void enque(int x)
    {
        //initialise new node temp with data x

        Node *temp= new Node(x);
        if(front == NULL) //if both front and rear is empty
        {
            front = rear=temp; 
            return;
        }
        rear -> next=temp;
        rear=temp;
    }
    
    void deque()
    {
        if(front == NULL) //list is empty 
         return;

         Node* temp=front;
         front = front -> next;;
         if(front== NULL)
         {
            rear=NULL;
         }
         delete(temp);
    }

};



int main(){

Queue q;

q.enque(10);
q.enque(20);
q.enque(30);
q.enque(40);
q.enque(60);

q.deque();

cout<<"q front"<< (q.front)->data <<endl;
cout<<"q rear"<< (q.rear)->data <<endl;

return 0;
}
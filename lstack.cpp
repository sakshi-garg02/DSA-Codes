#include<iostream>
using namespace std;

class MyStack{
    public:

    Node* head;
    int size;

    MyStack()
    {
        this.head=NULL;
        this.size=0;
    }

    void push(int data)
    {
        Node* temp=new Node(data);
        temp->next = head;
        head=temp;
    }
    int pop()
    {
        if(head==NULL){
        cout << "UNDERFLOW\n";
    }
    int res= head->data;
    head=head->next; size--;
    return res;
    }

    bool isEmpty()
    {
        return head== NULL;
    }
    int peek()
    {
        
        return head->data;
    }
    int size()
    {
        return size;
    }
}
int main(){
{
        MyStack s;

        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        s.push(5);

        cout << "elements has been pushed";
        //cout <<  "stack has element " << s.display() << endl;
    }

}
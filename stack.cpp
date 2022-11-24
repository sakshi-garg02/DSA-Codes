#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int *arr;
    int top;

    Stack(int c)
    {
        size = c;
        arr = new int[size];
        top = -1;
    }

    void push(int x)
    {
        top++;
        arr[top] = x;
    }
    int pop()
    {
        int res = arr[top];
        top--;
        return res;
    }

    int peek()
    {
        return top++;
    }

    bool isFull()
    {
        return (top != -1);
        cout << "queue is full";
    }

    bool isEmpty()
    {
        return (top == -1);
        cout << "queue is empty";
    }
    void display()
    {
        for (int i = 0; i <size; i++)
            {
                //cout << arr[i] << endl;
                cout << ("Stack is \n ", arr[i]);
                 cout << (" <-- ");

            }
    }
};
int main(){ 
int ch ;
Stack s(5);

while (ch != 7)
{

    cout << "Menu \n";

    cout << "1. Push an Element.\n";
    cout << "2. Pop an Element.\n";
    cout << "3. Peek Stack.\n";
    cout << "4. isempty.\n";
    cout << "5. isfull .\n";
    cout << "6. display.\n";
    cout << "7. quit.\n";

    cin >> ch;

    if (ch == 1)
    {
        s.push(1);
        s.push(2);
                cout << "pushed into stack";

    }

    else if (ch == 2)
    {
        s.pop();
        cout << "pop into stack";
    }

    else if (ch == 3)
    {
        s.peek();
    }
    else if (ch == 4)
    {
        s.isEmpty();
        cout << "queue is full";

    }
    else if (ch == 5)
    {
        s.isFull();
    }
    else if (ch == 6)
    {
        s.display();
    }
    else 
    {
        cout << "wrong";
    }

}}   
#include <iostream>
using namespace std;

struct MyStack
{
    int *arr;
    int size;
    int top;

    MyStack(int c)
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
        cout<<res;
    }
    int peek()
    {
        return top++;
    }
    bool isFull()
    {
        return (top != -1);
    }
    bool isEmpty()
    {
        return (top == -1);
    }

    void display()
    {

        if (top == -1)
        {
            cout << "Stack is empty!!";
        }
        else
        {

            for (int i = 0; i <size; i++)
            {
                //cout << arr[i] << endl;
                cout << ("Stack is \n ", arr[i]);
                 cout << (" <-- ");

            }
        }
    }
};

int main()

{
    do{ 
    int ch;
    MyStack s(5);

    cout << "Menu \n";

    cout << "1. Push an Element.\n";
    cout << "2. Pop an Element.\n";
    cout << "3. Peek Stack.\n";
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
        s.display();
    }
    else{ 
        cout << "wrong"; }

        

    }
     while(ch!=4);
    return 0;
   
}
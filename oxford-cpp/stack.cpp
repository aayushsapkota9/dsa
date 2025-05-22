#include <iostream>
#define MAX 5
using namespace std;

class STACK
{
private:
    int top = -1;
    int arr[MAX];

public:
    void enqueue(int n)
    {
        if (top >= MAX - 1)
        {
            cout << "Stack overflow";
            return;
        }
        else
        {
            top++;
            arr[top] = n;
        }
    }
    void dequeue()
    {
        if (top <= -1)
        {
            cout << "Stack underflow";
        }
        else
        {
            cout << arr[top];
            top--;
        }
    }
    void display()
    {
        int i;
        for (i = 0; i < MAX; i++)
        {
            cout << arr[i];
        }
    }
};
int main()
{
    STACK s1;
    int i;
    // enqueuing 5 elements using loop
    for (i = 0; i < 5; i++)
    {
        s1.enqueue(i);
    }
    // displaying those elements
    s1.display();
    // Dequeuing 5 elements using loop
    cout << "Dequeue \n";
    for (i = 0; i < 5; i++)
    {
        s1.dequeue();
    }
}
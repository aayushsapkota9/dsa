#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int n)
    {
        value = n;
        next = NULL;
    }
};
class STACK
{
private:
    Node *top = NULL;

public:
    void push(int n)
    {
        Node *current = new Node(n);
        current->next = top;
        top = current;
    }
    void pop()
    {
        if (top->next == NULL)
        {
            cout << "Stack underflow";
            return;
        }
        cout << top->value;
        top = top->next;
    }
    void display()
    {
        Node *temp = top;
        cout << "Stack: ";
        while (temp != NULL)
        {
            cout << temp->value;
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    int i;
    STACK s1;
    for (i = 0; i < 5; i++)
    {
        s1.push(i);
    }
    s1.display();
    s1.pop();
    s1.pop();
    s1.display();
}
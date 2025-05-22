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
    };
};
class QUEUE
{
private:
    Node *front = NULL, *back = NULL;

public:
    void enqueue(int n)
    {
        Node *current = new Node(n);
        if (front == NULL && back == NULL)
        {
            front = current;
            back = current;
        }
        else
        {
            back->next = current;
            back = current;
        }
    }
    void dequeue()
    {
        if (front == NULL)
        {
            cout << "No elements in the queue";
            return;
        }
        cout << front->value;
        front = front->next;
    }
};
int main()
{
    QUEUE q1;
    int i;
    for (i = 0; i < 3; i++)
    {
        q1.enqueue(i + 1);
    }
    for (i = 0; i < 3; i++)
    {
        q1.dequeue();
    }
}
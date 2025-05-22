#include <iostream>
#define MAX 5
using namespace std;
class QUEUE
{
private:
    int front = -1;
    int back = -1;
    int arr[MAX];

public:
    void enqueue(int n)
    {
        if (back >= MAX - 1)
        {
            cout << "Queue full";
        }
        else
        {
            if (front == -1 && back == -1)
            {
                front++;
                back++;
                arr[front] = n;
            }
            else
            {
                back++;
                arr[back] = n;
            }
        }
    }
    void dequeue()
    {
        if (front == -1 && back == -1)
        {
            cout << "Queue empty";
        }
        else
        {
            if (front == back)
            {
                cout << arr[front];
                front = -1;
                back = -1;
            }
            else
            {
                cout << arr[front];
                front++;
            }
        }
    }
};
int main()
{
    QUEUE q1;
    int i;
    // enqueuing 5 elements using loop
    for (i = 0; i < 5; i++)
    {
        q1.enqueue(i);
    }
    cout << "\n";
    // dequeuing 5 elements using loop
    for (i = 0; i < 5; i++)
    {
        q1.dequeue();
    }
}
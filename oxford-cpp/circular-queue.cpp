#include <iostream>
using namespace std;
#define MAX 5
class CQUEUE
{
private:
    int arr[MAX];
    int front = -1, back = -1;

public:
    void enqueue(int n)
    {
        if ((back + 1) % MAX == front)
        {
            cout << "Queue overflow";
            return;
        }

        if (front == -1 && back == -1)
        {
            front++;
            back++;
            arr[back] = n;
        }
        else
        {
            back = (back + 1) % MAX;
            arr[back] = n;
        }
    }
    void dequeue()
    {
        if (front == -1 && back == -1)
        {
            cout << "Queue empty";
            return;
        }
        cout << arr[front];

        if (front == back)
        {
            front = -1;
            back = -1;
        }
        else
        {
            front = (front + 1) % MAX;
        }
    }
};
int main()
{
    CQUEUE c1;
    int i;
    for (i = 0; i < 5; i++)
    {
        c1.enqueue(i);
    }
    for (i = 0; i < 5; i++)
    {
        c1.dequeue();
    }
    return 0;
}
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
class LinkedList
{
private:
    Node *head = NULL;

public:
    void insertNode(int n)
    {
        Node *current = new Node(n);
        if (head == NULL)
        {
            head = current;
            return;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = current;
        }
    }
    void deleteNode(int n)
    {
        Node *temp = head, *prev, *next;
        int count = 0;
        while (temp->next != NULL)
        {
            prev = temp;
            count++;
            temp = temp->next;
            next = temp->next;
            if (count == n)
            {
                break;
            }
        }
        prev->next = next;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value;
            temp = temp->next;
        }
    }
};
int main()
{
    LinkedList l1;
    l1.insertNode(1);
    l1.insertNode(2);
    l1.insertNode(3);
    l1.deleteNode(1);
    l1.display();
}
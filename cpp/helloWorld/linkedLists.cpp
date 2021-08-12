#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void Insert(int data, int n)
{

    Node *temp = new Node();
    temp->data = data;

    if (n == 1)
    {
        temp->next = head;
        head = temp;
        return;
    }
    Node *itr = head;
    for (int i = 0; i < n - 2; i++)
    {
        // n-2 becasue head already points at pos 1
        itr = itr->next;
    }
    temp->next = itr->next;
    itr->next = temp;
}

void Print()
{
    Node *itr = head;
    while (itr)
    {
        cout << " " << itr->data;
        itr = itr->next;
    }
}

void Delete(int pos)
{
    Node *itr = head;
    if (pos == 1)
    {
        head = head->next;
        delete itr;
        return;
    }
    for (int i = 0; i < pos - 2; i++)
    {
        itr = itr->next;
    }
    Node *toBeDeleted = itr->next;
    itr->next = toBeDeleted->next;
    delete toBeDeleted;
}

int main()
{

    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        Insert(i, i + 1);
        Print();
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        Delete(i);
        Print();
        cout << endl;
    }
    Print();
    return 0;
}
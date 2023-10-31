#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *prev = NULL;
    Node *next = NULL;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->next = NULL;
    }
};
void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insertAtTail(head, tail, val);
    }
    print(head);
    return 0;
}
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
    newNode->prev = tail;
    tail = newNode;
}
void insertAtHead(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    Node *tmp = head;
    newNode->next = head;
    tmp->prev = newNode;
    head = newNode;
}
void insertAtAnyPosition(Node *&head, Node *&tail, int pos, int val)
{
    if (pos == 1)
    {
        insertAtHead(head, tail, val);
    }
    else if (pos == size(head) + 1)
    {
        insertAtTail(head, tail, val);
    }
    else
    {
        Node *newNode = new Node(val);
        Node *tmp = head;
        for (int i = 1; i < pos - 1; i++)
        {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
        tmp->next->prev = newNode;
        newNode->prev = tmp;
    }
}
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
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
        // insertAtTail(head, tail, val);
        insertAtHead(head, tail, val);
    }
    print(head);
    return 0;
}
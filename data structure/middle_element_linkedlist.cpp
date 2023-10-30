#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
        int val;
        Node* next;
    Node(int val){
        this->val = val;
        this->next= NULL;
    }
};
void insert(Node *&head,Node *&tail,int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void middle_element(Node *head){
    Node* slow = head;
  Node* fast = head;

  // Move the fast pointer two nodes at a time, while moving the slow pointer one node at a time
  while (fast != NULL && fast->next != NULL) {
    slow = slow->next;
    fast = fast->next->next;
  }

  // If the fast pointer is NULL, then the linked list has an even number of nodes
  // In this case, print the second middle element
  if (fast == NULL) {
    cout << slow->next->val << endl;
  } else {
    cout << slow->val << endl;
  }
}

int main ()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val == -1) break;
        insert(head,tail,val);
    }
    middle_element(head);
    
    return 0;
}
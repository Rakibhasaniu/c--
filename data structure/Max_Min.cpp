#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
        int val;
        Node* next;
        Node (int val){
            this->val=val;
            this->next=NULL;
        }
};
void insert(Node *&head,Node *&tail,int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void max_min_value(Node* head) {
    if (head == NULL) {
        cout << "The linked list is empty" << endl;
        return;
    }

    int maxVal = head->val;
    int minVal = head->val;
    Node* current = head->next;

    while (current != NULL) {
        if (maxVal < current->val) {
            maxVal = current->val;
        }
        if (minVal > current->val) {
            minVal = current->val;
        }
        current = current->next;
    }

    cout << maxVal <<" "<< minVal << endl;
}
int main ()
{
    Node *head=NULL;
    Node *tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val == -1) break;
        insert(head,tail,val);
    }
    max_min_value(head);
    
    return 0;
}
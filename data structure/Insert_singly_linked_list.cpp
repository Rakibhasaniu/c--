#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
        int val;
        Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void print( Node * head){
    Node * tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}
void insert(Node * head,int pos,int val){
    Node* newNode = new Node(val);
    Node *tmp = head;
    for(int i=1;i<=pos-1;i++){
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}
int size(Node* head){
    Node * tmp = head;
    int count;
    while((tmp!=NULL)){
        count++;
        tmp=tmp->next;
    }
    return count;
}
int main ()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    // cout<<a->val<<endl;
    // cout<<b->val<<endl;
    // a->next=b;
    // cout<<a->next->val<<endl;
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    int pos,val;
    cin>>pos>>val;
    if(pos>size(head)){
        cout<<"Linked list is not that long."<<endl;
    } else {
        insert(head, pos,val);
    }
    // insert(head,2,509);
    print(head);
    
    return 0;
}
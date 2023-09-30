#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node (int data){
        this->data = data;
        this->next=NULL;
    }
};
void insert_tail(Node* &head,int v){
    Node * newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node * tmp = head;
    while(tmp->next != NULL){
        tmp = tmp -> next ;
    }
    tmp->next=newNode;
}

void print(Node * head){
    Node * tmp = head;
    while(tmp!=NULL){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
}
int main ()
{
    Node* head = NULL;
    cout<<"Option 1:Insert at Tail"<<endl;
    int op;
    cin>>op;
    if(op==1){
        int v;
        cin>>v;
        insert_tail(head,v);
    }
    print(head);
    return 0;
}
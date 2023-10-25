#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node *prev;
    Node (int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(Node *head){
    Node *tmp = head;
    while(tmp != NULL){
        cout<< tmp -> data << " ";
        tmp = tmp -> next;
    }
    cout<<endl;
}
void print_reverse(Node *tail){
    Node *tmp = tail;
    while(tmp != NULL){
        cout<<tmp->data<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
void insert_at_position(Node *head,int pos,int data){
    Node *newNode = new Node(data);
    Node *tmp = head;
    for(int i=1;i<=pos-1;i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev=newNode;
    newNode->prev = tmp;

}
int size(Node *head){
    Node *tmp = head;
    int cnt = 0;
    while(tmp!=NULL){
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insert_head(Node *&head,Node *&tail,int data){
    Node *newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;

    head = newNode;
}
void insert_tail (Node *&tail,int data){
    Node *newNode = new Node(data);
    tail->next =newNode;
    newNode->prev = tail;
    tail = tail->next;
}
int main ()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail=c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    int pos,data;
    cin>>pos>>data;
    if(pos == 0){
        insert_head(head,tail,data);
    } else if(pos == size(head)){
        insert_tail(tail,data);
    }
    else if(pos >= size(head)){
        cout<<"Invalid"<<endl;
    } else {

    insert_at_position(head,2,100);
    }

    print(head);
    print_reverse(tail);


    return 0;
}
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
        cout<<endl<<"Inserted At Head"<<endl<<endl;
        return;
    }
    Node * tmp = head;
    while(tmp->next != NULL){
        tmp = tmp -> next ;
    }
    tmp->next=newNode;
    cout<<"Inserted"<<endl;
}

void print(Node * head){
    Node * tmp = head;
    while(tmp!=NULL){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;
}
void insert_at_position(Node * head,int pos,int val){
    Node * newNode = new Node(val);
    Node * tmp = head;
    for(int i=1;i<pos-1;i++){
        tmp = tmp->next;
    }
    newNode->next=tmp->next; 
    tmp->next=newNode;
    cout<<endl<<"Inserted At Position"<<pos<<endl;


}
void insert_at_head(Node* &head,int val){
    Node* newNode = new Node(val);
    newNode->next=head;
    head=newNode;
    cout<<endl<<"Inserted AT head"<<endl;
}
void delete_any_position(Node* head,int pos){
    Node* tmp = head;
    for(int i=1;i<=pos -1;i++){
       tmp=tmp->next; 
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
int main ()
{
    Node* head = NULL;
   while (true)
   {
     cout<<"Option 1:Insert at Tail"<<endl;
     cout<<"Option 2:Print Linked List"<<endl;
     cout<<"Option 3:Insert At Any Position"<<endl;
     cout<<"Option 4:Insert AT Head"<<endl;
     cout<<"Option 5:Delete Any Position"<<endl;
     cout<<"Option 6:Terminate"<<endl;
    int op;
    cin>>op;
    if(op==1){
        int v;
        cin>>v;
        insert_tail(head,v);
    }
    else if(op ==2){
        print(head);
    } else if(op==3){
        int pos,val;
        cin>>pos>>val;
        if(pos == 0){
            insert_at_head(head,val);
        } else {

        insert_at_position(head,pos,val);
        }
    } else if(op == 4){
        int val;
        cin>>val;
        // cout<<"Insert At Head"<<endl;
        insert_at_head(head,val);
    } else if(op ==5){
        int pos;
        cout<<"Enter Position"<<endl;
        cin >> pos ;
        delete_any_position(head,pos);
    }
    else if(op ==6){
        break;
    }
   }
   
    return 0;
}
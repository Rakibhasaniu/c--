#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
        int val;
        Node * next;
    Node(int val){
        this->val=val;
        this->next= NULL;
    }
};
void insert (Node *&head, Node *&tail,int val){
    Node *temp = new Node(val);
    if( head ==NULL){
        head = temp;
        tail = temp;
        return;
    }
    tail->next = temp;
    tail=temp;
}
void max_value(Node *head){
     if( head == NULL ){
        cout << "The linked list is empty." << endl;
        return;
    }
    int max = head->val;
    Node *curr = head->next;
    while( curr!=NULL ){
        if(max < curr -> val){
            max = curr->val;
        }
        curr=curr->next;
    }
    cout<<max<<endl;
}
int main ()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while(true){
        cin>>val;
        if(val == -1) break;
        insert(head,tail,val);
    }
    max_value(head);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next;
    Node(int val){
        this->val = val;
        this->next=NULL;
    }

};
void insert(Node *&head, Node *&tail,int val){
    Node *tmp = new Node(val);
    if(head == NULL){
        head=tmp;
        tail=tmp;
    } else {
        tail->next=tmp;
        tail=tmp;
    }
}
bool same_value (Node *head1,Node *head2){
   while (head1 != NULL && head2 != NULL)
   {
    if(head1->val != head2->val ){
        return false;
    }
    head1=head1->next;
    head2=head2->next;
   }
   return (head1 == NULL && head2 == NULL);
    
}
int main ()
{
    Node *head1=NULL;
    Node *head2=NULL;
    Node *tail1=NULL;
    Node *tail2=NULL;
    int val1,val2;
    while(true){
        cin>>val1;
        if(val1 == -1) break;
        insert(head1,tail1,val1);
    }
    while(true){
        cin>>val2;
        if(val2 == -1) break;
        insert(head2,tail2,val2);
    }
    if(same_value(head1,head2)){
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}
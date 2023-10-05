#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Node{
    public:
    int value;
    Node *next;

    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};
void print(Node *head){
    Node *temp = head;
   
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
}

// void desecding(Node *&a,int n){
//     int x = (n+1)/2,y = -1;
//     if(n%2==0){
//         y = x+1;
//     }
//     int mid = 0;
//     for(Node *left=a; left->next; left=left->next){
//         for(Node *right=left->next; right; right=right->next){
//             if(left->value<right->value)swap(left->value,right->value);
//         }
//         mid ++;
//         if(mid==x || mid==y){
//             cout<<left->value<<" ";
//         }
//     }
//     if(n == 1) cout<<a->value;
//     if(n == 2) cout<<a->next->value;
// }
void reverse(Node *a){
    if(a==NULL) return; 
    reverse(a->next);
    cout<<a->value<<" ";
}
void addTail(Node *&head,Node *&tail,int v){
    Node *newTail = new Node(v);
    if(tail==NULL){
        tail = newTail;
        head = newTail;
        return;
    }
    tail->next = newTail;
    tail = newTail;
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;
    while(true){
        int x;
        cin >>x;
        if(x == -1) break;
        addTail(head,tail, x);
    }
    reverse(head);
    cout<<"\n";
    print(head);
    return 0;
}
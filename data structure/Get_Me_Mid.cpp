// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// class Node{
//     public:
//     int value;
//     Node *next;

//     Node(int value){
//         this->value = value;
//         this->next = NULL;
//     }
// };

// void insert(Node *&head, int v){

//     Node *newnode = new Node(v);
//     if(head == NULL){
//         head = newnode;
//         return;
//     }
//     Node *temp = head;
//     while(temp->next!=NULL){
//         temp = temp->next;
//     }
//     temp->next = newnode;
// }
// void print(Node *head){
//     Node *temp = head;
//     int mini = 1000, maxi=0;
//     while(temp != NULL){
//         // mini = min(mini, temp->value);
//         // maxi = max(maxi, temp->value);
//         cout<<temp->value<<endl;
//         temp = temp->next;
//     }
//     cout<<maxi<<" "<<mini<<endl;
// }
// void compare(Node *a, Node *b){
//     while(a != NULL and b != NULL){
//         if(a->value != b->value){
//             cout<<"NO"<<endl;
//         }
//         a = a->next;
//         b = b->next;
//     }
//     if(a == NULL and b == NULL)cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;
// }
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
// int main(){
//     Node *head1 = NULL;
//     int cnt = 0;
//     // Node *head2 = NULL;
//     while(true){
//         int x;
//         cin >> x;
//         if(x == -1) break;
//         else insert(head1, x);
//         cnt ++;
//     }
//     desecding(head1,cnt);
//     //print(head1);
//     // while(true){
//     //     int x;
//     //     cin >> x;
//     //     if(x == -1) break;
//     //     else insert(head2, x);
//     // }
//     // compare(head1, head2);
//     return 0;
// }

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
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void middle_element(Node *head) {
    if(head == NULL){
        return;
    }
    Node *fast = head;
    Node *slow= head;
    Node *prev = NULL;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        prev = slow;
        slow=slow->next;
    }
    if(fast == NULL) {
        cout<<prev->val<<" "<<slow->val<<endl;
    } else {
        cout<<slow->val<<endl;
    }
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
    for(Node *i = head;i->next != NULL;i = i->next){
        for(Node *j = i->next;j != NULL; j = j->next){
            if(i->val<j->val){
                swap(i->val , j->val );
            }
        }
    }
    // print_linked_list(head);
    middle_element(head);
    return 0;
}
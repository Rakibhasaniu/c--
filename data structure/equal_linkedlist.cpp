#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}
bool size (Node *head1,Node *head2){
    int s1=0;
    int s2=0;
    Node *tmp1=head1;
    while(tmp1!=NULL){
        s1++;
        tmp1=tmp1->next;
    }
    Node *tmp2=head2;
    while(tmp2!=NULL){
        s2++;
        tmp2=tmp2->next;
    }
    return s1 == s2;
}
int main() {
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val1, val2;
    cout << "Enter values for the first linked list (-1 to stop): ";
    while (true) {
        cin >> val1;
        if (val1 == -1) break;
        insert(head1, tail1, val1);
    }

    cout << "Enter values for the second linked list (-1 to stop): ";
    while (true) {
        cin >> val2;
        if (val2 == -1) break;
        insert(head2, tail2, val2);
    }

    // Now head1 and head2 point to the respective linked lists with user-input values.
    if(size(head1,head2)){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}

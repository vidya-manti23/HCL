#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
};

// insert
void insertatend(ListNode* &head, int data){
    ListNode* newnode = new ListNode();
    newnode->val = data;
    newnode->next = NULL;

    if(head == NULL){
        head = newnode;
    }
    else{
        ListNode* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

// display
void display(ListNode* h){
    ListNode* temp = h;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

// merge
ListNode* merge2lists(ListNode* L1, ListNode* L2){
    ListNode* dummy=new ListNode();
    dummy->val=0;
    dummy->next=NULL;
    ListNode* d = dummy;

    ListNode* t1 = L1;
    ListNode* t2 = L2;

    while(t1 != NULL && t2 != NULL){
        if(t1->val <= t2->val){
            d->next = t1;
            t1 = t1->next;
        }
        else{
            d->next = t2;
            t2 = t2->next;
        }
        d = d->next;
    }

    if(t1) d->next = t1;
    else d->next = t2;

    return dummy->next;
}

int main(){
    ListNode* L1 = NULL;
    ListNode* L2 = NULL;

    insertatend(L1, 1);
    insertatend(L1, 3);
    insertatend(L1, 5);

    insertatend(L2, 2);
    insertatend(L2, 4);
    insertatend(L2, 6);
    insertatend(L2, 8);

    display(L1);
    display(L2);

    ListNode* L3 = merge2lists(L1, L2);
    display(L3);

    return 0;
}

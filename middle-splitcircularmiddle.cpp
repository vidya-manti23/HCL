// Odd → slow = middle, fast = last
//Even → slow = left middle, fast = second last

// 1) slow=head, fast=head;
// while(fast->next!=NULL && fast->next->next!=NULL){
//     slow=slow->next;
//     fast=fast->next->next;
// }
// = slow points to middle, if odd
// = slow points to left middle, if even


// 2) slow=head, fast-head, prev=NULL;
// while(fast!=NULL && fast->next!=NULL){
//     prev=slow;
//     slow=slow->next;
//     fast=fast->next->next;
// }
// = slow points to middle
// = prev points to mid-1

// CIRCULAR LL
// - for circularLL, theres no NULL, always points to head, so we check if it reaches head or not

// 1 2 3 4 5
// slow → 3
// fast → 5
//  1 2 3 and 4 5 ....again these are circular LL
// 1 → 2 → 3 → (back to 1)
// 4 → 5 → (back to 4)
 
// 1 2 3 4
// slow → 2
// fast → 3 (initial) but we make it point to last node which is 4...by
// if(fast->next->next == head)
//    fast = fast->next;
// 1 2 -> 1, and  3 4 -> 3

pair<ListNode*, ListNode*> split(ListNode* head){
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast->next!=head && fast->next->next!=head){
        slow=slow->next;
        fast=fast->next->next; 
    }
    if(fast->next->next==head){ //check if even,then make 2nd last to last
        fast=fast->next;
    }
    
    ListNode* t1= head; //dividing
    ListNode* t2= slow->next;
    
    slow->next=t1; //making em circular
    fast->next=t2;
    
    return {t1,t2};
    
}

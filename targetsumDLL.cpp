// Given a sorted doubly linked list and a target sum, find all pairs of nodes whose values add up to the target.
// said alllll pairsss..so use vector to store pairsss
// as the *DLL sorted*, *use 2 pointer* same as array

vector< pair<int,int> > findpairs(ListNode* head, int target){
    
    vector<pair<int,int>>ans; 
    if(head==NULL) return ans;
    
    ListNode* left=head; //left points to small
    ListNode* right=head;
    
    while(right->next!=NULL){
        right=right->next;    //right is at end, pointing to large number
    }
    
    while(left!=right && right->next!=left){ //dont reach end, and stop if crosses
        int sum= left->data+ right->data;
        if(sum==target){
            ans.push_back({left->data, right->data});
            left=left->next;
            right=right->prev;
        }
        else if(sum<target){
            left=left->next;
        }
        else{
            right=right->prev;
        }
    }
    
    return ans;
}

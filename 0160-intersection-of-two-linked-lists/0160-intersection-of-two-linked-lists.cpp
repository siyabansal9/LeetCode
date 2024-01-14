/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:

    int length(ListNode* head){
    int l=0;
    ListNode* temp=head;

    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}

    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
    int l1=length(head1);
    int l2=length(head2);

    int diff=0;
    ListNode* ptr1;
    ListNode* ptr2;

    if(l1>l2){
        diff=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else{
        diff=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }

    while(diff){
        ptr1=ptr1->next;
        if(ptr1==NULL){
            return NULL;
        }
        diff--;
    }

    while(ptr1!=NULL && ptr2!=NULL){

        if(ptr1==ptr2){
            return ptr1;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return NULL;
    }
};
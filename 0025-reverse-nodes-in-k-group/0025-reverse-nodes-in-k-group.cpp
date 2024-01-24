/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        // Check if there are at least k nodes
        ListNode* checkNode = head;
        for (int i = 0; i < k; ++i) {
            if (checkNode == nullptr) {
                return head;  // Not enough nodes to reverse
            }
            checkNode = checkNode->next;
        }

        ListNode* prevptr = nullptr;
        ListNode* currptr = head;
        ListNode* nextptr = nullptr;

        int count = 0;

        // Reverse the first k nodes
        while (currptr != nullptr && count < k) {
            nextptr = currptr->next;
            currptr->next = prevptr;
            prevptr = currptr;
            currptr = nextptr;
            count++;
        }

        // Recursive call for the remaining nodes
        if (nextptr != nullptr) {
            head->next = reverseKGroup(nextptr, k);
        }

        // prevptr is the new head of the reversed group
        return prevptr;
    }
};

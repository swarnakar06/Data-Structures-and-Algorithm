class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head || !head->next) return false; // No cycle if list is empty or has 1 node

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast!=NULL && fast->next!=NULL) {
            slow = slow->next;           // Move slow by 1
            fast = fast->next->next;     // Move fast by 2

            if (slow == fast) {          // They meet → cycle exists
                return true;
            }
        }
        return false; // fast reached the end → no cycle
    }
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        // Move fast pointer twice as fast as slow pointer
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // When fast reaches the end, slow will be at the middle
        return slow;
    }
};

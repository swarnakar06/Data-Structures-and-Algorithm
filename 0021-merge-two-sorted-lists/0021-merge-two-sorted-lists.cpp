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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //base case
        if(list1==NULL || list2==NULL)
        {
            return list1==NULL ? list2 : list1;
        }

        // case-1
        if(list1->val <= list2->val)
        {
            list1->next=mergeTwoLists(list1->next,list2);
            return list1;
        }
        //case-2
        else
        {
            list2->next=mergeTwoLists(list1,list2->next);
            return list2;
        }


        
    }
};
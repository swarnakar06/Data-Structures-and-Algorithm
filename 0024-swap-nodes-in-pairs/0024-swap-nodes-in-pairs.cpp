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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp=head;
        int k =0;
    
        //check if 2 nodes existt or not
        while(k<2)
        {
            if(temp==NULL)
            {
                return head;
            }
            temp=temp->next;
            k++;
        }

        //recursively caall for next LINkedlist
        ListNode* prevnode=swapPairs(temp);

        //reverse current group
        temp=head;k=0;
        while(k<2)
        {
            ListNode* newnext=temp->next;
            temp->next=prevnode;
            prevnode=temp;
            temp=newnext;
            k++;
        }
        return prevnode;
        
    }
};
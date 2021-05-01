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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* returnHead = l1 != nullptr ? l1 : l2;
        
        if( l1 == nullptr || l2 == nullptr )
            return returnHead;
        
        ListNode* other = l2;
        if( other->val < returnHead->val )
        {
            returnHead = other;
            other = l1;
        }
        ListNode* current = returnHead;
        
        while( current != nullptr && other != nullptr )
        {
            if( current->next != nullptr && current->next->val < other->val )
            {
                current = current->next;
                continue;
            }
            else
            {
                ListNode* currentNext = current->next;
                current->next = other;
                current = other;
                other = currentNext;
            }
        }
        
        return returnHead;
    }
};
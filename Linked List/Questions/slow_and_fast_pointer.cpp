/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// LEETCODE
// 141 LINKED LIST CYCLE
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        // slow and fast pointer technique
        // if slow moves n steps than the fast pointer moves 2n steps

        ListNode *slow = head;
        ListNode *fast = head;

        while (fast && fast->next) //!=NULL
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                return true;
        }
        return false;
    }
};
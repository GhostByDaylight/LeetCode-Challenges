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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode();
        ListNode* l4 = new ListNode();
        int multiplyer = 1;
        
        while (l1 != nullptr) {
            l3->val += l1->val * multiplyer;
            multiplyer = multiplyer * 10;
            l1 = l1->next;
        }
        multiplyer = 1;
        while (l2 != nullptr) {
            l4->val += l2->val * multiplyer;
            multiplyer = multiplyer * 10;
            l2 = l2->next;
        }
        int test = l3->val + l4->val;
        ListNode* l5 = new ListNode(test % 10);
        test = test / 10;
        ListNode* node2 = new ListNode(test % 10);
        test = test / 10;
        ListNode* node3 = new ListNode(test % 10);
        
       l5->next = node2;
        node2->next = node3;
        node3->next = nullptr;
        
        
        
        return l5;
    }
};

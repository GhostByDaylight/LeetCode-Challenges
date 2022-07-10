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
        int l1val = 0, l2val = 0;
        ListNode* l5 = new ListNode();
        int multiplyer = 1;
        
        while (l1 != nullptr) {
            l1val += l1->val * multiplyer;
            multiplyer = multiplyer * 10;
            l1 = l1->next;
        }
        multiplyer = 1;
        while (l2 != nullptr) {
            l2val += l2->val * multiplyer;
            multiplyer = multiplyer * 10;
            l2 = l2->next;
        }
        int test = l1val + l2val;
        ListNode* head = l5;
        while (test != 0) {
            ListNode* new_node = new ListNode();
            l5->val = test % 10;
            cout << "The value inserted in l5: " << test % 10 << endl << l5->val << endl;
            l5->next = new_node;
            test = test / 10;
        }
        l5 = head;
        while (l5 != nullptr) {
            cout << l5->val << endl;
             l5 = l5->next;
        }
        cout << l1val << endl;
        cout << l2val << endl;
        
        return l5;
    }
};

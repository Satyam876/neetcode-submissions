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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* first = &dummy;

        for(int i=1; i<left; i++){
            first = first->next;
        }

        ListNode* currNode = first->next;
        ListNode* preNode = NULL;
        ListNode* lastNode = currNode;

        for(int i=0; i<(right-left+1); i++){
            ListNode* temp = currNode->next;
            currNode->next = preNode;
            preNode = currNode;
            currNode = temp;
        }

        first->next = preNode;
        lastNode->next = currNode;

        return dummy.next;
    }
};
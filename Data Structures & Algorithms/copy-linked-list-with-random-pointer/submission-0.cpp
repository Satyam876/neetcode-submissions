/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp = head;
    
    // 1st Part -> Inserting new nodes in-between
        while(temp != NULL){
            Node* copyNode = new Node(temp->val);
            copyNode->next = temp->next;
            temp->next = copyNode;
            temp = temp->next->next;
        }

        temp = head;

    // 2nd Part -> Connecting the random pointers
        while(temp != NULL){
            if(temp->random)
                temp->next->random = temp->random->next;
            temp = temp->next->next;
        }


    // 3rd Part -> Connecting the next pointers

        Node dummy(0);
        Node *result = &dummy;
        temp = head;

        while(temp != NULL){
            result->next = temp->next;
            temp->next = temp->next->next;
            result = result->next;
            temp = temp->next;
        }
        return dummy.next;
    }
};

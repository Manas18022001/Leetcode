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
    int LengthLL(ListNode *head){
        // if(head == NULL){
        //     return 0;
        // }
        ListNode *temp = head;
        int count = 0;
        while(temp != NULL){
            temp = temp->next;
            count++;
        }

        return count;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        int length = LengthLL(head);

        if(head == NULL || length < k){
            return head;
        }

        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *nex = NULL;
        int count = 0;

        while(curr != NULL && count < k){
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
            count++;
        }
        if(nex != NULL)
            head->next = reverseKGroup(nex, k);

        return prev;
    }
};
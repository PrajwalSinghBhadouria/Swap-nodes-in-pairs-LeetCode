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
    void insertnode(ListNode* &head1,ListNode* &tail, int d ){
        ListNode* temp = new ListNode(d);
        if(head1==NULL){
            head1 = temp;
            tail = head1;
        }
        else{
            tail -> next = temp;
            tail = temp;
        }
    }
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp = head;
        if(temp==NULL || temp->next == NULL){
            return head;
        }
        ListNode* head1 = NULL;
        ListNode* tail = NULL;
        int p,q;
        while(temp!=NULL){
            p = temp->val;
            if(temp->next==NULL){
                insertnode(head1,tail,p);
                break;
            }
            q = temp->next->val;
            insertnode(head1,tail,q);
            insertnode(head1,tail,p);
            temp= temp->next->next;
        }
        return head1;
        
    }
};

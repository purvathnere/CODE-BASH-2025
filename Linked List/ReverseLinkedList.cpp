
//iterative approach
class Solution {
  public:
    // Function to reverse a linked list.
    struct Node* reverseList(struct Node* head) {
        Node* prev=NULL;
        Node* curr=head;
        Node* next=NULL;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
};
//recurive approcah
class Solution {
private:
    void reverse(ListNode* &head,ListNode* curr, ListNode* prev) {
        if (curr == NULL) {
            head = prev;
            return;
        }
       ListNode* forward = curr->next;
        reverse(head, forward, curr);
        curr->next = prev;
    }

public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        reverse(head, curr, prev);
        return head;
    }
};

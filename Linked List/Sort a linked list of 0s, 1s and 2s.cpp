class Solution {
  public:
    // Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node* head) {

        int countZero=0;
        int countOne=0;
        int countTwo=0;
        Node* temp=head;
        while(temp!=NULL)
        {
            if(temp->data==0)
            {
                countZero++;//0
            }
            else if(temp->data==1)
            {
                countOne++;//1 
            }
            else if(temp->data==2)
            {
                countTwo++;//2
            }
            temp=temp->next;
        }
        temp=head;
         while(temp!=NULL)
        {
            if(countZero!=0)
            {
                temp->data=0;
                countZero--;
            }
            else if(countOne!=0)
            {
                temp->data=1;
                countOne--;
            }
            else if(countTwo!=0)
            {
                temp->data=2;
                countTwo--;
            }
            temp=temp->next;
          
        }
        
        return head;
        
    }
};

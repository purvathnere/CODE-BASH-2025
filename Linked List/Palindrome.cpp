bool isPalindrome(Node *head)
{
    Node* temp = head;
    stack<int> st;
    
    // Traverse the linked list and push the data onto the stack
    while (temp != NULL)
    {
        st.push(temp->data);
        temp = temp->next;  // Move to the next node
    }
    
    // Reset temp to head to compare again
    temp = head;
    
    // Traverse the linked list again and compare with the stack
    while (temp != NULL)
    {
        if (temp->data != st.top()) // Compare the top of the stack with the current node
        {
            return false;  // Not a palindrome
        }
        st.pop();  // Pop the top of the stack
        temp = temp->next;  // Move to the next node
    }

    return true;  // If all elements matched, it is a palindrome
}

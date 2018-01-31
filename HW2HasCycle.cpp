bool has_cycle(Node* head)
{
    Node* iter = head, *temp = head;

    while(temp && temp->next)
    {
        iter = iter->next;
        temp = temp->next->next;

        if(iter == temp)
         return true;
    }
    return false;
}

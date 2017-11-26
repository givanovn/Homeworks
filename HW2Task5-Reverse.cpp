Node* Reverse(Node* head)
{
	if (head == nullptr)
	{
		return head;
	}

	if (head->next == nullptr)
	{
		return head;
	}

	Node *temp = new Node;
	Node *next = new Node;

	temp = head;

	while (temp->next != nullptr)
	{
		temp = temp->next;
		head = temp;
	}

	while (temp != nullptr)
	{
		next = temp->prev;
		temp->prev = temp->next;
		temp->next = next;
		temp = temp->next;
	}
	return head;
}

Node* MergeLists(Node *headA, Node* headB)
{
	if (headA == nullptr)
	{
		return headB;
	}

	else if (headB == nullptr)
	{
		return headA;
	}

	if (headB->data < headA->data)
	{

		Node* temp = headA;
		headA = headB;
		headB = temp;
	}

	Node* copyOfTheHead = headA;


	while (headA->next)
	{
		if (headA->next->data <= headB->data)
		{
			headA = headA->next;
		}

		else
		{

			Node* temp = headA->next;
			headA->next = headB;
			headB = temp;
		}
	}
	headA->next = headB;

	return copyOfTheHead;
}

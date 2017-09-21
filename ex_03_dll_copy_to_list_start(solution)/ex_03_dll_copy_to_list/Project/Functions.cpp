/*
	Ngo, Thomas
	CS A250
	March 22, 2016

	Copy To List
*/

// copyToList
void DoublyList::copyToList(DoublyList& otherList) const
{
	if (count == otherList.count)
	{
		Node *callingObj = first;
		Node *paramObj = otherList.first;

		while (callingObj != NULL && paramObj != NULL)
		{
			paramObj->setData(callingObj->getData());
			callingObj = callingObj->getNext();
			paramObj = paramObj->getNext();
		}
	}
	else if (otherList.count < count)
	{
		Node *callingObj;
	
		if (otherList.first == NULL)
		{
			callingObj = last;
			while (callingObj != NULL)
			{
				otherList.insertFront(callingObj->getData());
				callingObj = callingObj->getPrev();
			}
		}
		else
		{
			callingObj = first;
			Node *paramObj = otherList.first;

			while (callingObj != NULL && paramObj != NULL)
			{
				paramObj->setData(callingObj->getData());
				callingObj = callingObj->getNext();
				paramObj = paramObj->getNext();
			}

			while (callingObj != NULL)
			{
				Node *newNode = new Node(callingObj->getData(),otherList.last, NULL);
				otherList.last->setNext(newNode);
				otherList.last = newNode;
				callingObj = callingObj->getNext();
				++otherList.count;
			}
		}
	}
	else if (otherList.count > count)
	{
		if (first == NULL)
		{
			otherList.destroyList();
		}
		else
		{
			Node *callingObj = first;
			Node *paramObj = otherList.first;

			while (callingObj != NULL && paramObj != NULL)
			{
				paramObj->setData(callingObj->getData());
				callingObj = callingObj->getNext();
				paramObj = paramObj->getNext();
			}

			otherList.last = paramObj->getPrev();
			otherList.last->setNext(NULL);

			Node *current = paramObj;
			while (paramObj != NULL)
			{
				paramObj = paramObj->getNext();
				delete current;
				current = NULL;
				--otherList.count;
			}
		}
	}
}
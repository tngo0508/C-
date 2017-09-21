/*
	Ngo, Nhat Tan
	CS A250
	March 09, 2016

	In-class Exercise 3: DLL - Copy to List
*/

// copyToList
void DoublyList::copyToList(DoublyList& otherList) const
{
	//create pointer pointing to first node of the calling object
	Node *callingOjb = first;

	//create pointer pointing to first node of the paramerter object
	Node *parameterOjb = otherList.first;

	//Case 1: The calling object and parameter have the same number of nodes
	if (count == otherList.count)
	{
		//Traverse both lists and replace parameterOjb's data by callingObj's
		while (callingOjb != NULL && parameterOjb != NULL)
		{
			parameterOjb->setData(callingOjb->getData()); //Overwrite the corresponding data on the parameter object
			callingOjb = callingOjb->getNext();
			parameterOjb = parameterOjb->getNext();
		}
	}
	//Case 2: the parameter object has fewer nodes than the calling object
	else if (count > otherList.count)
	{
		//Case 2a: the parameter ojbect is empty
		//create new nodes and get data from corresponding calling object's nodes
		if (otherList.first == NULL)
		{
			callingOjb = last; //Make callingOjb pointer pointing to last node
			while (callingOjb != NULL) //Traverse the calling object's list backward
			{
				//Using insertFront function to add new node to parameter object's list
				//Data from each node is obtained from calling object's node respectively
				otherList.insertFront(callingOjb->getData());
				callingOjb = callingOjb->getPrev();
			}
		}
		else //Case2b: The parameter object has fewer nodes
		{
			bool found = false; //Create a flag to stop the loop
			while (callingOjb != NULL && parameterOjb != NULL && !found) //Traverse both lists
			{
				//checking if parameterOjb reach the end of the list or not
				//If it reaches the end, exit the the loop
				if (parameterOjb == NULL)
					found = true;
				else
				{
					parameterOjb->setData(callingOjb->getData()); //Overwrite the corresponding data on the parameter object
					callingOjb = callingOjb->getNext();
					parameterOjb = parameterOjb->getNext();
				}
			}

			//Continue traverse the calling object's list only
			while (callingOjb != NULL)
			{
				//add the subsequent nodes and copy the rest of the data
				Node *newNode = new Node(callingOjb->getData(), otherList.last, NULL);
				otherList.last->setNext(newNode);
				otherList.last = otherList.last->getNext();
				callingOjb = callingOjb->getNext();

				++otherList.count; //update parameter oject's count after adding new nodes
			}
		}
	}
	//Case 3: The parameter object has more nodes than the calling object
	else
	{
		//Case 3a: The calling object is empty
		if (first == NULL)
		{
			otherList.destroyList(); //	Empty the parameter list
		}
		else //Case 3b: The parameter object has more nodes
		{
			bool found = false; //create flag

			otherList.count = 0; //reset to 0 to keep track of the count
			while (callingOjb != NULL && parameterOjb != NULL && !found)
			{
				if (callingOjb == NULL)
					found = true;
				else
				{
					parameterOjb->setData(callingOjb->getData()); //Overwrite the data
					callingOjb = callingOjb->getNext();
					parameterOjb = parameterOjb->getNext();
					++otherList.count; //Update new count value
				}
			}
				
			otherList.last = parameterOjb->getPrev();
			otherList.last->setNext(NULL);
		}
	}
}

#include "list.h"
#include<iostream>

void List :: Add(float value)
{
		node *temp = new node();
		temp->data = value;
		temp->next = nullptr;
		temp->prev = nullptr;
		if(head == nullptr)
		{
			head = temp;
			tail = temp;
		}
		else if(head != nullptr)
		{
			temp->prev = tail;
			tail->next = temp;
			tail = temp;
		}

		std::cout << "The number was added.\n";
}

void List :: GetNode()
{
	node *temp;
	temp = head;
	while(temp != nullptr)
	{
		std::cout << temp->data << std::endl;
		temp = temp->next;
	}
}

void List :: DeleteElement(int pos)
{
	node *temp = head;
	node *ptr;
	for (int i = 1; i < pos; i++) {
		temp = temp->next;
	}
	if (temp == head)
	{
		head = head->next;
		temp->prev = nullptr;
	}
	else if(temp == tail)
	{
		temp->prev->next = nullptr;
	}
	else
	{
		ptr = temp->next;
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		temp = ptr;
	}
}

int List :: ChooseElement(int pos)
{
	node *temp;
	int tmp;
	temp = head;
	tmp = temp->data;
	for (int i = 1; i < pos; i++)
	{
		temp = temp->next;
		tmp = temp->data;
	}

	return tmp;
}

float List :: LongSumLong(float x, float y)
{
	node *temp1 = head;
	node *temp2 = head;
	float x1, y1;
	bool c1 = false, c2 = false;
	while(!c1)
	{
		if(x == temp1->data)
		{
			c1 = true;
			x1 = temp1->data;
		}
		temp1 = temp1->next;
	}

	while(!c2)
	{
		if(y == temp2->data)
		{
			c2 = true;
			y1 = temp2->data;
		}
		temp2 = temp2->next;
	}

	return x1+y1;
}

float List :: LongSubLong(float x, float y)
{
	node *temp1 = head;
	node *temp2 = head;
	float x1, y1;
	bool c1 = false, c2 = false;
	while(!c1)
	{
		if(x == temp1->data)
		{
			c1 = true;
			x1 = temp1->data;
		}
		temp1 = temp1->next;
	}

	while(!c2)
	{
		if(y == temp2->data)
		{
			c2 = true;
			y1 = temp2->data;
		}
		temp2 = temp2->next;
	}

	return x1-y1;
}

float List :: LongMulLong(float x, float y)
{
	node *temp1 = head;
	node *temp2 = head;
	float x1, y1;
	bool c1 = false, c2 = false;
	while(!c1)
	{
		if(x == temp1->data)
		{
			c1 = true;
			x1 = temp1->data;
		}
		temp1 = temp1->next;
	}

	while(!c2)
	{
		if(y == temp2->data)
		{
			c2 = true;
			y1 = temp2->data;
		}
		temp2 = temp2->next;
	}

	return x1*y1;
}

float List :: LongDivLong(float x, float y)
{
	node *temp1 = head;
	node *temp2 = head;
	float x1, y1;
	bool c1 = false, c2 = false;
	while(!c1)
	{
		if(x == temp1->data)
		{
			c1 = true;
			x1 = temp1->data;
		}
		temp1 = temp1->next;
	}

	while(!c2)
	{
		if(y == temp2->data)
		{
			c2 = true;
			y1 = temp2->data;
		}
		temp2 = temp2->next;
	}

	return x1/y1;
}

#pragma once
#include <iostream>
using namespace std;

template <class T>

class clsQueue
{

public :

	class Node 
	{

	public : 
		T value;
		Node* next;
	};

protected :
	Node* _front = NULL;
	Node* _rear = _front;
	int _size = 0;

public : 

	void push(T value)
	{
		Node* newNode = new Node();

		newNode->value = value;
		newNode->next = NULL;

		if (_front == NULL)
		{
			_front = newNode;
			_rear = newNode;

			_size++;
			return;
		}

		if (_rear->next == NULL) 
		{
			_rear->next = newNode;
		}

		_rear = newNode;

		_size++;
	}


	void print(string newLine = "\n")
	{
		Node *head = _front;

		while (head != NULL) 
		{
			cout << head->value << "  ";
			head = head->next;
		}

		cout << newLine << endl;
	}

	
	T front() 
	{
		if (_front != NULL)
			return _front->value;
		else
			return NULL;
	}

	T back() 
	{
		if (_rear != NULL)
			return _rear->value;
		else
			return NULL;
	}

	int size() 
	{
		return _size;
	}

	
	void pop() 
	{
		if (_front == NULL)
			return;

		if (_front == _rear) 
		{
			delete _front;
			_front = NULL;
			_rear = NULL;
			_size--;
			return;
		}
		Node* head = _front;

		_front = _front->next;

		delete head;

		_size--;
	}

};


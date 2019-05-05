#ifndef STACK_CPP
#define STACK_CPP
#include"Stack.h"


template<typename T>
stack<T>::stack()
{
	head = nullptr;
}

template<typename T>
stack<T>::~stack()
{
	clear();
}

template<typename T>
void stack<T>::clear()
{
	while (!is_empty())
		pop();
}

template<typename T>
size_t stack<T>::count()
{
	size_t counter = 0;
	stack_element* current_element = head;
	while (current_element != nullptr)
	{
		counter++;
		current_element = current_element->previous;
	}
	return counter;
}

template<typename T>
bool stack<T>::is_empty()
{
	return head == nullptr;
}

template<typename T>
void stack<T>::push(const T & element)
{
	stack_element* new_element = new stack_element;
	new_element->data = element;
	new_element->previous = head;
	head = new_element;
}

template<typename T>
T stack<T>::top()
{
	if (is_empty())
		throw exception("empty stack");
	else
		return head->data;
}

template<typename T>
void stack<T>::pop()
{
	if (is_empty())
		return;
	stack_element* delete_element = head;
	head = head->previous;
	delete delete_element;
}

template<typename T>
void stack<T>::print_stack()
{

	stack_element* current_element = head;
	while (current_element != nullptr)
	{
		cout << current_element->data << "\t";
		current_element = current_element->previous;
	}
	cout << endl;
}

template<typename T>
bool stack<T>::is_opukly()
{
	if (count() < 3)
		return false;
	bool asc = false, desc = false;
	stack_element* current_element = head;
	while (current_element->previous != nullptr && current_element->data < current_element->previous->data)
	{
		asc = true;
		current_element = current_element->previous;
	}
	while (current_element->previous != nullptr && current_element->data > current_element->previous->data)
	{
		desc = true;
		current_element = current_element->previous;
	}
	return asc&&desc;
}

#endif STACK_CPP
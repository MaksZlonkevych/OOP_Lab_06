#ifndef STACK_H
#define STACK_H



#include<iostream>
using namespace std;

template<typename T=int>
class stack
{
	struct stack_element
	{
		T data;
		stack_element* previous;
	};

	stack_element*  head;

public: stack();
		~stack();
		void clear();
		size_t count();
		bool is_empty();
		void push(const T& element);
		T top();
		void pop();
		void print_stack();
		bool is_opukly();
};

#include"Stack.cpp"

#endif // !STACK_H

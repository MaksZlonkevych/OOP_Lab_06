#include"Stack.h"
#include<iomanip>
int main()
{
	stack<double> st;
	cout << "--------------double stack:-------------------\n";
	cout <<"count elements in stack:\t"<< st.count() << endl;
	st.push(3.14);
	st.push(5.71);
	st.push(1.5);
	cout << "count elements in stack:\t" << st.count() << endl;
	cout <<"empty stack:\t"<<boolalpha<< st.is_empty() << endl;
	st.print_stack();
	cout << "is opukly:\t" << boolalpha << st.is_opukly() << endl;
	while (!st.is_empty())
	{
		cout << st.top() << endl;
		st.pop();
	}
	cout << "count elements in stack:\t" << st.count() << endl;
	cout << "empty stack:\t" << st.is_empty() << endl;

	stack<char> st1;
	cout << "--------------char stack:-------------------\n";
	cout << "count elements in stack:\t" << st.count() << endl;
	st1.push('A');
	st1.push('B');
	st1.push('C');
	st1.push('D');
	cout << "count elements in stack:\t" << st1.count() << endl;
	cout << "empty stack:\t" << st1.is_empty() << endl;
	st1.print_stack();
	cout << "is opukly:\t" << boolalpha << st1.is_opukly() << endl;
	while (!st1.is_empty())
	{
		cout << st1.top() << endl;
		st1.pop();
	}
	cout << "count elements in stack:\t" << st1.count() << endl;
	cout << "empty stack:\t"  << boolalpha << st1.is_empty() << endl;

	stack<> st2;
	cout << "--------------int stack:-------------------\n";
	cout << "count elements in stack:\t" << st2.count() << endl;
	st2.push(9);
	st2.push(8);
	st2.push(7);
	st2.push(6);
	st2.push(5);
	st2.push(4);
	st2.push(3);
	st2.push(2);
	st2.push(1);
	cout << "count elements in stack:\t" << st2.count() << endl;
	cout << "empty stack:\t" << boolalpha << st2.is_empty() << endl;
	st2.print_stack();
	cout << "is opukly:\t" << boolalpha << st2.is_opukly() << endl;
	st2.clear();
	cout << "count elements in stack:\t" << st2.count() << endl;
	cout << "empty stack:\t" << st2.is_empty() << endl;
	system("pause");
	return 0;
}
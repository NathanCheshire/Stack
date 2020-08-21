/*
Student Name: Nathan Cheshire
Student NetID: nvc29
Compiler Used: Visual Studio Community Edition 2019
Program Description:
This program is the first programming assignment for CSE2383; implement a stack
*/

#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
	try
	{
		//create and output new stack
		Stack myStack;
		cout << "Created stack: " << myStack << endl;

		//is empty on new stack
		cout << "isEmpty on new stack: " << myStack.isEmpty() << endl;

		//test case 4
		//cout << "[4]Pop from a newly created stack: " << myStack.Pop() << endl;

		cout << "Now is it empty: " << myStack.isEmpty() << endl;

		myStack.Push(80);

		//test case 1
		cout << "[1]Push to a newly created stack: " << myStack << endl;

		myStack.Push(1);

		//test case 2
		cout << "[2]Push to a non-empty stack: " << myStack << endl;

		myStack.Pop();

		myStack.Pop();

		myStack.Push(2);

		//test case 3
		cout << "[3]Push to an empty stack: " << myStack << endl;

		//test case 5
		//cout << "[5]Pop from a non-empty stack: " << myStack.Pop() << endl;

		//test case 6
		cout << "[6]Pop from an empty stack: " << myStack.Pop() << endl;

		myStack.Push(1);
		myStack.Push(2);
		myStack.Push(3);
		myStack.Push(4);
		myStack.Push(5);
		myStack.Push(6);
		myStack.Push(7);
		myStack.Push(8);
		myStack.Push(9);
		myStack.Push(10);

		//test case 7
		cout << "[7]Pushed 10 elements: " << myStack << endl;

		myStack.Pop();
		myStack.Pop();
		myStack.Pop();
		myStack.Pop();
		myStack.Pop();

		cout << "Poped 5 elements: " << myStack << endl;

		Stack newStack;

		//test case 8
		//cout << "[8]Peek at new stack: " << newStack.peek() << endl;

		newStack.Push(5);
		newStack.Push(8);

		//test case 9
		cout << "[9]Peek at non-empty stack: " << newStack.peek() << endl;

		newStack.Pop();
		newStack.Pop();

		//test case 10
		cout << "[10]Peek at empty stack: " << newStack.peek() << endl;


		Stack maxStack;

		//further checking below-------------------------------------------------------
		cout << "Create a new stack and print it: " << maxStack << endl;
		cout << "Now perform random push, pop, and peek functions: " << endl;

		maxStack.Push(50);

		cout << "Peek: " << maxStack.peek() << endl;

		maxStack.Push(55);
		maxStack.Push(60);

		cout << "maxStack after pushing two more values: " << maxStack << endl;

		cout << "Pop once: " << maxStack.Pop() << endl;
		cout << "Pop again: " << maxStack.Pop() << endl;

		cout << "maxStack after pop twice: " << maxStack << endl;

		maxStack.Push(65);

		cout << "maxStack after push 65: " << maxStack << endl;

		cout << "Peek after pushing 65: " << maxStack.peek() << endl;
	}
	
	catch (int n)
	{
		if (n == 111)
		{
			cout << "EmptyStackException" << endl;
		}
	}
}
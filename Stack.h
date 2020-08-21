/*
Student Name: Nathan Cheshire
Student NetID: nvc29
Compiler Used: Visual Studio Community Edition 2019
Program Description:
This header file contains the code for the Stack and the Node which the stack utilizes
*/

#pragma once
#include <iostream>

//standard namespace
using namespace std;

//Node class implementation
class stackNode
{
	//Everything is public since we are not accessing node directly through our main program
	public:

		//each node in this case had data and a next (below) pointer
		int data;
		stackNode* below;

		stackNode()
		{
			this->data = 0;
			this->below = nullptr;
		}

		//Constructor
		stackNode(int data, stackNode* below)
		{
			this->data = data;
			this->below = below;
		}
};

//Stack class implementation
class Stack
{
	private:
		//The top node is kept private so it cannot be changed directly
		stackNode* top;

	public:

		//Exception for attemptin to access data on an empty stack
		static const int EmptyStackException = 111;

		//default constructor
		Stack() 
		{
			top = nullptr;
		}

		//constructor with starting data
		Stack(int data)
		{
			top = new stackNode(data, nullptr);
		}


		//push method
		void Push(int data)
		{
			stackNode* tmp = new stackNode(data, top);

			top = tmp;
		}

		//pop method
		int Pop()
		{
			//if we cant pop
			if (isEmpty())
			{
				throw EmptyStackException;
			}

			stackNode* tmp = top;
			top = top->below;
			int copy = tmp->data;
			delete tmp;
			return copy;
		}

		//peek method
		int peek()
		{
			//if we cant peek
			if (isEmpty())
			{
				throw EmptyStackException;
			}

			return top->data;
		}

		//isEmpty method
		bool isEmpty()
		{
			if (top == nullptr)
			{
				return true;
			}

			return false;
		}

		//Operator overload of <<
		friend ostream& operator<<(ostream& os, const Stack& stack)
		{
			//if the stack is not empty
			if (stack.top != nullptr)
			{
				//the stack has one node
				if (stack.top->below == nullptr)
				{
					os << stack.top->data;
				}

				//the stack has more than one node (at least two)
				else
				{
					//start at the top
					stackNode* start = stack.top;

					//while our node's below does not point to null
					while (start->below != nullptr)
					{
						//shift our node's data to os
						os << start->data << " ";

						//go to the next node
						start = start->below;
					}

					//since we are at the last node, get its data and shift it to os.
					os << start->data << " ";
				}
			}

			//the stack is empy
			else
			{
				os << "Empty stack";
			}

			return os;
		}
};
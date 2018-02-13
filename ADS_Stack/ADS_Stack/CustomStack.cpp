#include "CustomStack.h"
#include "stdafx.h"
#include <stdexcept>
#include <cstdlib>

using namespace std;

template <typename T>
CustomStack<T>::CustomStack(int size)
{
	top = -1;
	length = size;
	if (size == 0)
		p = 0;
	else
		p = new T[length];
}

template <typename T>
CustomStack<T>::~CustomStack()
{
	if (p != 0)
		delete[] p;
}

template <typename T>
void CustomStack<T>::Push(T elem)
{
	if (p == 0)
	{
		throw std::logic_error("Stack is empty!");
		return;
	}
	if (top == (length - 1))
	{
		throw new std::overflow_error("Stack is full!");
		return;
	}
	else
	{
		top++;
		p[top] = elem;
	}
}
template <typename T>
T CustomStack<T>::Pop()
{
	if (p == 0 || top == -1)
	{
		throw std::underflow_error("Stack is empty!");
		exit(EXIT_FAILURE);
	}
	int ret = p[top];
	top--;
	return p[top--];
}

template <typename T>
void CustomStack<T>::Display()
{
	for (int i = 0; i <= top; i++)
		cout << p[i] << " ";
	cout << endl;
}
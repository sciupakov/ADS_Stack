#pragma once

template< typename T >
class CustomStack
{
private:
	T *p;
	int top, length;

public:

	template< typename T >
	CustomStack(int);
	~CustomStack();

	void Push(T);
	T Pop();
	void Display();
};
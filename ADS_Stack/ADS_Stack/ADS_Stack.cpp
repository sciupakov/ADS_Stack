// ADS_Stack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "CustomStack.h"

using namespace std;

int main()
{
	int a = 5;
	CustomStack<int> stck(2);
	stck.Push(a);
	cout << stck.Pop() << endl;
	cin >> a;

    return 0;
}


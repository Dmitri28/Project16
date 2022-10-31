#pragma once
#include"ubstractClass.h"
#include<iostream>
using namespace std;
class teaRoses: public ubstractClass
{
	int length;
public:
	void Foo()override
	{
		cout << "Enter please length of tea roses" << endl;
	}
	teaRoses()
	{

	}
	void setLength(int length)
	{
		this->length = length;
	}
	int getLength()
	{
		return ++length;
	}
};


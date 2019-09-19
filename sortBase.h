#pragma once
#include <iostream>
#include<vector>

template<class T> 
class sortBase
{
public:
	sortBase()
	{

	}

public:
	virtual void sort() = 0;
	virtual void display() = 0;
	virtual ~sortBase()
	{

	}
};



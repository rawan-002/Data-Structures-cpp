#pragma once
#include "Queue.h"
#include<iostream>
using namespace std;
template<class T>

class clsMyStack:public clsQueue <T>
{
public:
	 
	void push(T Item)
	{
		clsQueue<T>::_MyList.InsertAtBeginning(Item);
		//    this->MyList.InsertAtBeginning(Item);
	}

	T Top()
	{
		return clsQueue <T> ::front();
	}

	T Bottom()
	{
		return clsQueue<T>::back();
	}
};


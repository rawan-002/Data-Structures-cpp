#include"clsQueue.h"
#include <iostream>
using namespace std;

int main()
{
	clsQueue<int>Queue;

	Queue.push(1);
	Queue.push(2);
	Queue.push(3);
	Queue.push(4);
	Queue.push(5);
	Queue.push(6);
	Queue.push(7);


	cout << "\nQueue List : "; Queue.Print();

	cout << "\nQueue Size: " << Queue.Size();
	cout << "\nQueue Front: " << Queue.front();
	cout << "\nQueue Back: " << Queue.back();
	Queue.pop();

	cout << "\n\nQueue after pop() : ";
	Queue.Print();

	cout << "\nItem [2] : " << Queue.GetItem(2);


	Queue.Reverse();
	cout << "\nQueue After Reverse : "; 
	Queue.Print();

	Queue.UpdateItem(3,30);
	cout << "\nQueue After Updateing Item [3] to [30] : ";
	Queue.Print();

	Queue.InsertAfter(4, 89);
	cout << "\nQueue After Inserting Item [7] to [89] : ";
	Queue.Print();

	Queue.InsertAtFront( 500);
	cout << "\nQueue After Insert At Front : ";
	Queue.Print();


	Queue.InsertAtBack(54);
	cout << "\nQueue After Insert At Back : ";
	Queue.Print();

	Queue.Clear();
	cout << "\nQueue After Clear : ";
	Queue.Print();
}


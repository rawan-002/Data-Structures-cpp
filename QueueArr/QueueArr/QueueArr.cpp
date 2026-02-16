#include"clsQueueArr.h"
#include <iostream>
using namespace std;

int main()
{
	clsQueueArr<int>QueueArr;

	QueueArr.push(1);
	QueueArr.push(2);
	QueueArr.push(3);
	QueueArr.push(4);
	QueueArr.push(5);
	QueueArr.push(6);
	QueueArr.push(7);


	cout << "\nQueue List : "; QueueArr.Print();

	cout << "\nQueue Size: " << QueueArr.Size();
	cout << "\nQueue Front: " << QueueArr.front();
	cout << "\nQueue Back: " << QueueArr.back();
	QueueArr.pop();

	cout << "\n\nQueue after pop() : ";
	QueueArr.Print();

	cout << "\nItem [2] : " << QueueArr.GetItem(2);


	QueueArr.Reverse();
	cout << "\nQueue After Reverse : ";
	QueueArr.Print();

	QueueArr.UpdateItem(3, 30);
	cout << "\nQueue After Updateing Item [3] to [30] : ";
	QueueArr.Print();

	QueueArr.InsertAfter(4, 89);
	cout << "\nQueue After Inserting Item [7] to [89] : ";
	QueueArr.Print();

	QueueArr.InsertAtFront(500);
	cout << "\nQueue After Insert At Front : ";
	QueueArr.Print();


	QueueArr.InsertAtBack(54);
	cout << "\nQueue After Insert At Back : ";
	QueueArr.Print();

	QueueArr.Clear();
	cout << "\nQueue After Clear : ";
	QueueArr.Print();
}
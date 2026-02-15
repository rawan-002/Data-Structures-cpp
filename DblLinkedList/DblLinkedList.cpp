
#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;


int main()
{

    clsDblLinkedList <int> MydblLinkedList;

    cout << "\nThe Linked List is Empty ? \n";
    if (MydblLinkedList.isEmpty())
        cout << "\nYes, List is Empty. " << endl;
    else
        cout << "\nNo, List is NOT Empty. " << endl;


    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);


    cout << "\nLinked List Contenet:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.InsertAfter(4, 30);

    cout << "\nAfter Insert \n";
    MydblLinkedList.PrintList();
}
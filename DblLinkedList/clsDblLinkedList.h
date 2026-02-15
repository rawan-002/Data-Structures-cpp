
#pragma once
#include <iostream>
using namespace std;


template <class T>
class clsDblLinkedList
{
protected:
    int _Size = 0;

public:

    class Node
    {

    public:
        T value;
        Node* next;
        Node* prev;
    };

    Node* head = NULL;

    void InsertAtBeginning(T value)
    {

        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = head;
        newNode->prev = NULL;

        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode;
        _Size++;

    }

    // Print the linked list
    void PrintList()

    {
        Node* Current = head;

        while (Current != NULL) {
            cout << Current->value << " ";
            Current = Current->next;
        }
        cout << "\n";


    }

    Node* Find(T Value)
    {
        Node* Current = head;
        while (Current != NULL) {

            if (Current->value == Value)
                return Current;

            Current = Current->next;
        }

        return NULL;

    }

    void InsertAfter(Node* current, T value) {

        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = current->next;
        newNode->prev = current;

        if (current->next != NULL) {
            current->next->prev = newNode;
        }
        current->next = newNode;
        _Size++;

    }

    void InsertAtEnd(T value) {

        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = NULL;
        if (head == NULL) {
            newNode->prev = NULL;
            head = newNode;
        }
        else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
            newNode->prev = current;
        }
        _Size++;

    }

    void DeleteNode(Node*& NodeToDelete) {

        if (head == NULL || NodeToDelete == NULL) {
            return;
        }
        if (head == NodeToDelete) {
            head = NodeToDelete->next;
        }
        if (NodeToDelete->next != NULL) {
            NodeToDelete->next->prev = NodeToDelete->prev;
        }
        if (NodeToDelete->prev != NULL) {
            NodeToDelete->prev->next = NodeToDelete->next;
        }
        delete NodeToDelete;

        _Size--;
    }

    void DeleteFirstNode()
    {

        if (head == NULL) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        delete temp;
        _Size--;

    }

    void DeleteLastNode() {

        if (head == NULL) {
            return;
        }

        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        Node* current = head;
        // we need to find the node before last node.
        while (current->next->next != NULL)
        {
            current = current->next;
        }

        Node* temp = current->next;
        current->next = NULL;
        delete temp;
        _Size--;

    }

    /* int Size()      // O(n) because we traverse all nodes to count them

     {
         short counter = 0;

         Node* Current = head;

         while (Current != NULL)
         {
             counter++;

             Current = Current->next;

         }
         return counter;
     }*/


    int Size()  // Size() is O(1) now because we keep track of _Size
    {
        return _Size;
    }

    /* bool isEmpty()
     {
         if (head == NULL)
             return true;
         else
             return false;
     }*/

    bool isEmpty()
    {
        return (_Size == 0 ? true : false);
    }

    void Clear()
    {
        while (_Size > 0)
        {
            DeleteFirstNode();
        }
    }

    void Reverse()
    {
        Node* current = head;
        Node* temp = nullptr;
        while (current != nullptr)
        {
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev;
        }
        if (temp != nullptr)
        {
            head = temp->prev;
        }
    }

    Node* GetNode(int index)
    {
        if (index < 0 || index >= _Size)
            return NULL;

        Node* current = head;
        int counter = 0;

        while (current != NULL)
        {
            if (counter == index)
                break;

            current = current->next;
            counter++;
        }

        return current;
    }

   /* int GetItem(int index)
    {
        if (index < 0 || index >= _Size)
            return NULL;

        Node* current = head;
        int counter = 0;

        while (current != NULL)
        {
            if (counter == index)
                return current->value;

            //---نفترض
            //---cout << "\nNode Item is :
            //---<< MydblLinkedList.GetItem(2);

            current = current->next;
            counter++;
        }

        return -1;
    }*/

    T GetItem(int index)
    {
        return GetNode(index)->value;
    }

                  //in Main.cpp

    /*    cout << "\nAfter Updateing Item [3] \n";
          MydblLinkedList.PrintList();          */


   /* T UpdateItem(int index, int value)
    {
        return GetNode(index)-> value = value;
    }*/

   /* bool UpdateItem(int index, T value)
    {
        Node* node = GetNode(index);
        if (node == nullptr)
            return false; 

        node->value = value;
        return true;      
    }*/

    bool UpdateItem(int index, T newValue)
    {
        Node* ItemNode = GetNode(index);

        if (ItemNode != NULL)
        {
            ItemNode->value = newValue;
            return true;
        }
        else
        {
            return false;
        }
    }

    bool InsertAfter(int index, T Value) //Find By index and we used old InserAfter() Function
    {
        Node* ItemNode = GetNode(index);

        if (ItemNode != NULL)
        {
          InsertAfter(ItemNode,Value);
            return true;
        }
        else
        {
            return false;
        }
    }


};


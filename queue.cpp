#include "queue.h"
#include <iostream>
#include <iomanip>
using namespace std; 
int Queue::count=0; 
int Queue::getCount()
{
    return count; 
}
Queue::Queue()
{ 
    cout << "Queue() called:" << this << endl;
    head=nullptr; 
    tail=nullptr; 
}
Queue::~Queue()
{
  cout << "~Queue called: " << this <<endl; 
  //loops through every node and deletes the new head of the queue using an aux nosw
  while(head != nullptr)
  {
      Node* temp=head; 
      head=head->next;
      delete temp;
  }
}
void Queue::display(ostream& a)
{
    Node* temp=head; 
    a<<"display() called \n"; 
    a << setw(9) << " "; 
    a << "Queue: "; 
    //loops to the end of the queue by looping until an aux node to head is nullptr and traverses aux node->next
    while(temp!=nullptr)
    {
        //prints the data of the node to the ostream passed 
        a<< temp->data << " "; 
        //processes to next node using ->next 
        temp=temp->next; 
    }
    //prints a new line to the console 
    a<<"\n";
}
void Queue::enqueue(int d)
{
    cout << "enqueue ("<<d<<") " << "called \n";
    //makes a new node with the passed value 
    Node* add=new Node(d); 
    //if head is nullptr so the queue is empty
    if(head==nullptr)
    {
        //tail is equal to add and head is equal to tail 
        head=tail=add; 
    }
    //otherwise tail->next is the new node to connect the rest of the nodes 
    //tail is set to the new node to update it 
    else 
    {
        tail->next=add;
        tail=add;
    }
}
void Queue::dequeue()
{
    cout << "dequeue() called" << endl;
    //if head is null the queue is empty-display that to the console
    if(head == nullptr)
    {
        cout << "queue is empty" <<endl;
    }
    else 
    {
        //aux node temp is set to the node after head 
        Node* temp=head->next; 
        //head is deleted 
        delete head; 
        //the new head is set to temp as that was the node after head previously 
        head=temp;
        //runs the display function to display the updated queue 
        display(cout);
    }
    
} 

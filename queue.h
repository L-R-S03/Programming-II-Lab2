#ifndef QUEUE_H
#define QUEUE_H
#include "node.h"
#include <iostream>
using namespace std;
class Queue
{
    private:
        Node* head; 
        Node* tail; 
        static int count; 
    public:
        Queue();
        ~Queue(); 
        void enqueue(int);  
        void dequeue(); 
        void display(ostream&);  
       static int getCount(); 

};
#endif
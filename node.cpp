#include "node.h"
#include <iostream>
using namespace std; 
Node::Node()
{ 
}

Node::Node(int d)
{
    data=d;  
    next=nullptr;
    cout << "Node(int) called: " <<this<<endl;
}
Node::~Node()
{
    cout << "~Node() called: " << this << endl; 
}
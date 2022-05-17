//Lauren Smith 
//Lab_2 
//Programming II Spring 22 
#include <iostream>
#include <iomanip>
#include "queue.h"
#include "node.h"
//prints 25 hyphens followed by test case number and what is being tested for dispplay
void display_test_case(int count,string test_name)
{
    cout << string(25,'-') << " test " << to_string(count) << ": " << test_name << string(25,'-')<<endl; 
}
int main()
{
    Queue q=Queue();
    //runs display_test_case with test case 0 testing enqueue 
    display_test_case(0,"enqueue");
    //loop repeats 5 times adding 1 to i and multiplying it by 10 as enqueue value to enqueue 10,20,30,40,50
    for(int i=0; i<5; i++)
    {
        q.enqueue((i+1)*10); 
        q.display(cout); 
    }
    //runs display_test_case with test case 1 testing dequeue 
    display_test_case(1,"dequeue");
    //loops six times running dequeue to display all cases 
    for(int i=0; i<6; i++)
    {
        q.dequeue(); 
    }
    return 0;
}


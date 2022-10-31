#include <iostream>
using namespace std;
#define size 5
int Q[size];    //declare array of 5 elements
int front= -1;
int rear= -1;

//define an arary lets say its called A 
//give the array its size
//declare variables front and rear  
//front = -1
//rear =-1
//check if queue if empty or full
int empty()
{
    if (front==-1 && rear ==-1)
    {
        return true;
    }
    else 
    {
        return false;
    }
}


//enqueue at te rear 
    //if rear = size-1 then the queue is full 
    //else if front=-1
      //front=0
      //rear ++
      //a(rear)=value inserted
void enqueue()
{
    int value ;
    if (rear == (size-1))
    {
        cout<<"The queue is full"<<endl;
    }
    else 
    {
        if (front=-1)
        {
            front = 0;
            cout<<"Add value to the queue"<<endl;
            cin>>value;
            rear ++;
            Q[rear ]= value;
        }
    }
}
//dequeue at the front
     //if queue is empt you cannot perform dequeue
     //else
        //if front= rear   ---this means there is one value and the front and rear are in the same position
            //front=rear =-1
        //else
            //front++
void dequeue()
{
    if (empty())
    {
        cout <<"Queue is empty"<<endl;

    }
    else 
    {
        if(front==rear)
        {
            cout<<"Queue has only one item"<<endl;
            cout<<"Item deleted is "<<Q[front]<<endl;
            front =rear = -1;
            cout<<"Queue is now empty"<<endl;
        }
        else 
        {
            cout<<"Item deleted is "<<Q[front]<<endl;
            front ++;
        }
    }
}
//show front
    //if queue is empty 
        //print queue is empty
void Front_Rear()
{
    if (empty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else 
    {
        cout<<"Element at the front is "<<Q[front]<<endl;
        cout<<"Element at the rear is "<<Q[rear]<<endl;
    }
}
//diplay all queue elements
    //if queue is empty
        //print that it is empty
    //else 
        //for int i=front;i<=rear;i++
            //print the elements in the queue
void display()
{
    int i;
    if (empty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else 
    {
        for(i=front;i<=rear;i++)
        {
            cout<<Q[i];
        }
    }
}
int main()
{
    int option;
    cout<<"1. Insert element into the queue\n";
    cout<<"2. Delete element from the queue\n";
    cout<<"3. Show the front and rear elements\n ";
    cout<<"4. Display all queue elements\n";
    cout<<"Enter option\n";
    cin>>option;
    switch (option)
    {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            Front_Rear();
            break;
        case 4:
            display();
            break;
        default:
            cout<<"Invalid option!!!"<<endl;
            cout<<"1. Insert element into the queue\n";
            cout<<"2. Delete element from the queue\n";
            cout<<"3. Show the front and rear elements\n ";
            cout<<"4. Display all queue elements\n";
            cout<<"Enter option\n";
            cin>>option;
    }
     return 0;   

    
}


     

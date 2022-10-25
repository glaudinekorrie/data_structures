

#include<iostream>
using namespace std;
#define MAX 50
int queue_array[MAX];
int rear = - 1;
int front = - 1;
int choice;
void insert()
{
    int add_item,rear ;
    int front,queue_array[MAX];
    if (rear == MAX - 1)
    cout<<"Queue Overflow ";
    else
    {
        if (front == - 1)

        front = 0;
        cout<<"Inset the element in queue : "<<endl;
        cin>>add_item;
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
} /* End of insert() */

void delete()
{
    if (front == - 1 || front > rear)
    {
        cout<<"Queue Underflow \n";
        return ;
    }
    else
    {
        cout<<"Element deleted from queue is : "<< queue_array[front]<<endl;
        front = front + 1;
    }
}

void display()
{
    int front,rear;
    int i;
    if (front == - 1)
       cout<<"Queue is empty "<<endl;
    else
    {
        cout<<"Queue is : "<<endl;
        for (i = front; i <= rear; i++)
            cout<< queue_array[i]<<endl;

    }
}
void insert()
void delete();
void display();

int main()
{
    int queue_array[MAX];
    int rear = - 1;
    int front = - 1;
    int choice;
    while (1)
    {
        cout<<"1.Insert element to queue "<<endl;
        cout<<"2.Delete element from queue "<<endl;
        cout<<"3.Display all elements of queue "<<endl;
        cout<<"4.Quit \n";
        cout<<"Enter your choice : "<<endl;
        cin>>choice;
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            cout<<"Wrong choice "<<endl;
        }
    }
}


queue.cpp
Displaying palendrom.cpp.

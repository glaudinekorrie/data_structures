//define size of stack
//assign value of size
//int top=-1
#include<iostream>
using namespace std;
#define size 5
int S[size];
int top=-1;
 
//check of stack is empty
    //top value is at place -1
void full()
{
    int value;
    if (top == size-1)
    {
        cout<<"Stack is full "<<endl;
    }
    else 
    {
        top++;
        S[top]=value;
    }
}
//to add an element push()
    //increment top by 1 and incert the value
void add ()
{
    
    if (top = size - 1)
    {
        cout<<"Stack is full"<<endl;
    }
    else 
    {
        int value;
        top++;
        S[top]=value;
    }
}
//check if stack is full
    //top value = size - 1
//remove an element pop()
    //decrement top by one and pop
void remove()
{
    if (top== -1)
    {
        cout<<"Stack is empty"<<endl;
    }
    else 
    {
        cout<<"The removed elemnt is"<<S[top]<<endl;
        top --;
    }
}
//display all the elements
    //use for loop(for i=0;i<=top;i++)
    //print stack(i)
void display()
{
    int i;
    if (top == -1)
    {
        cout<<"Stack is empty"<<endl;
    }
    else 
    {
        for(i=0;i<=top;i++)
        {
            cout<<S[i]<<endl;
        }
    }
}

int main()
{
    int value,option;
   // stack <int>S;
    cout<<"1. Add an element "<<endl;
    cout<<"2. Remeove an element from the stack\n";
    cout<<"3.Display  elements of the stack\n";
    cout<<"Enter option\n";
    cin>>option;

    switch(option)
    {
        case 1:
            cout<<"Enter value to be added "<<endl;
            cin>>value;
            add();
            break;
        case 2:
            remove();
            break;
        case 3:
            display();
            break;
        default:
            cout<<"Invalid option"<<endl;
             cout<<"1. Add an element "<<endl;
            cout<<"2. Remeove an element from the stack\n";
            cout<<"3.Display  elements of the stack\n";
            cout<<"Enter option\n";
            cin>>option;

    return 0 ;
    }

}
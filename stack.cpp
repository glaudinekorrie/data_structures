
Conversation opened. 1 read message.

Skip to content
Using Gmail with screen readers
in:sent
Enable desktop notifications for Gmail.
   OK  No thanks
4 of 23
(no subject)

Glaudine Chepkorir <chepkorirglaudine3@gmail.com>
Attachments
Thu, Oct 20, 11:11 AM (5 days ago)
to digitalstudentswork

3
 Attachments
  •  Scanned by Gmail
//CIT-227-935/2021
//GLAUDINE CHEPKORIR
#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* top = NULL;
void push(int val) {
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
   newnode->data = val;
   newnode->next = top;
   top = newnode;
}
void pop() {
   if(top==NULL)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< top->data <<endl;
      top = top->next;
   }
}
void display() {
   struct Node* ptr;
   if(top==NULL)
   cout<<"stack is empty";
   else {
      ptr = top;
      cout<<"Stack elements are: ";
      while (ptr != NULL) {
         cout<< ptr->data <<" ";
         ptr = ptr->next;
      }
   }
   cout<<endl;
}
int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Choose: "<<endl;
      cin>>ch;
      switch(ch)
       {
         case 1:
        {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3:
        {
            display();
            break;
         }
         case 4:
        {
            cout<<"Exit"<<endl;
            break;
         }
         default:
        {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}
stack.cpp
Displaying stack.cpp.

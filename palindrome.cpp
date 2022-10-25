
#include <iostream>
#include<algorithm>
using namespace std;

string isPalindrome(string Y)
{
    string X=Y ;
    reverse(X.begin(), X.end());


    if (Y==X)
    {

        cout<<"Is a palindrome"<<endl;
    }

    else
    {

       cout<<"Is not a palindrome"<<endl;

    }
}

int main()
{
    string Y;
    cout<<"Write your expression"<<endl;
    cin>>Y;
    isPalindrome(Y);

    return 0;
}

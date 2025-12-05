#include <iostream>
using namespace std;
int main()
{

    char one ;
    cout<<"Enter first character";
    cin>>one;

    char two ;
    cout<<"Enter second character";
    cin>>two;

    char three ;
     cout<<"Enter second character";
    cin>>three;

    char four ;
     cout<<"Enter second character";
    cin>>four;

    char five ;
     cout<<"Enter second character";
    cin>>five;

    string result ="";

    result += one;
    result += two;
    result += three;
    result += four;
    result += five;

    cout<<result<<endl;


 string user ="";
 cout<<"enter a string ";
 cin>>user;

 cout<<user<<endl;


int num;
cout<<"Enter a Number ";
cin>>num;

if(num%5==0)
{
    if (result.length()==user.length())
    {
        cout<<"Good"<<endl;
    }
    else if  (result.length()!=user.length())
    {
        cout<<"Bad"<<endl;
    }

    else if (result.length()<user.length())
    {
        cout<<user[3]<<endl;

    }
    
    else if (result.length()>user.length())
    {
        cout<<user+result;
    }
}
 cout<<user+result;


    return 0;
}

#include <iostream>
using namespace std;
int main (){
 int a=0,b=1,c=1,d;
 cout<<a<<" "<<b<<" "<<c<<" ";
 for(int i=3;i<=10;i++)
 {
    d=a+b+c;
    cout<<c<<" ";
    a=b;
    b=c;
    c=d;
 }

    return 0;
}
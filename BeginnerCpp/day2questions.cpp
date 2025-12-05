//Question number 1 Write a program using if-else to check whether a number is even or odd.

// #include<iostream>
// using namespace std;
// int main(){
// int num ;
// cout<<"Enter num";
// cin>>num;
// if (num%2==0)
// {
//     cout<<"even";
// }
// else {
//     cout<<"odd";
// }
// return 0;
// }


// 8. Write a program using if-else to check if a year is a leap year or not.


#include<iostream>
using namespace std;
int main(){
int year;
cout<<"Enter year" <<endl;
cin>>year;
if(year%4==0){
    cout<<"not a leap year";
}
else{
    cout<<"leap year";
}

 return 0;
}


#include <iostream>
using namespace std;
int main(){

    // int a = 64 , b=2;

    // while(a%b==0)
    // {
    //     a/=b;
    // }
    //     if(a==1)
    //     {
    //         cout<<"Power of 2";

    //     }
    //     else
    //     {
    //         cout<<"not power of 2";
    //     }
    
//     int a  ;
//     cout<<"enter starting numbers";

//     cin>>a;

//    int b ;
//       cout<<"enter Ending numbers";
//     cin>>b ;

//     while (a>=b )
//     {
//    cout<<b ;
//       b--;
//     }

    // for (int i = 0; i <=100; i++)
    // {
    //     cout<<i;
    // }

    long long int n;
    cout <<"enter value of n "<<endl;
    cin>>n;
    int sum=0;
    int lastdigit,last;
    int count =0;
    long long int temp =n ;
    while (temp)
    {
        last=temp%10;
        if(last==0)
        {
            count++;
        }
        else{
            break;
        }
        temp/=10;
    }
    while(n)
    {
        lastdigit=n%10;
        sum=sum*10 +lastdigit;
        n/=10;
    }
    for(int i=0;i<count;i++)
    {
        cout<<"0";
    }
    cout<<sum;

        return 0;
}
#include <iostream>
using namespace std;
int main()
{
// 1. Print numbers from 1 to N (using for loop, while loop and do-while loop)

// forloop

// int n ;
// cout<<"enter n";
// cin>>n;
// for (int i = 0; i <=n ; i++)
// {
//     cout<<i<<endl;
// }
// int i = 0;
// while (i<=n){

//     cout<<i<<endl;
//     i++;
// }

// int i = 0;
//  do {

//     cout<<i<<endl;
//     i++;
// }while (i<=n);

// 2. Print sum of first N natural numbers(for loop, while loop and do-while loop)



// int n ;
// cout<<"enter last number you want";
// cin>>n;
// int sum =0 ;
// for (int i =1 ; i<=n ; i++)
// {
//     cout<<i<<endl;
//     sum+=i;
// }

// cout<<sum;





// int i=1;

// while (i<=n)
// {
//     cout<<i<<endl;
//       sum+=i;
//        i++;
     
// }
// cout<<sum;



// int i=1;
// do 
// {
//     cout<<i<<endl;
//  sum+=i;
//     i++;
// } while (i<=n);

// cout<<sum;




// 3. Print sum of even numbers from 1 to N (for loop while loop and do-while loop)


// int n ;
// cout<<"enter last number you want";
// cin>>n;

// int sum =0  ;


// for (int  i =1 ; i<=n;i++)

// {

// if (i%2==0){
//   sum=sum+i ;


// }



// }
// cout<<sum;


// int n  ;
// cout<<"enter last number you want";
// cin>>n;

// int sum =0  ;
// int i = 0;

// while ( i<=n)
// {
// if (i%2==0){
//   sum=sum+i ;


// }
// i++;
// }
// cout<<sum;



// int n  ;
// cout<<"enter last number you want";
// cin>>n;

// int sum =0  ;
// int i = 0;

// do 
// {
// if (i%2==0){
//   sum=sum+i ;


// }
// i++;
// }while ( i<=n);
// cout<<sum;



// 3. Print sum of odd  numbers from 1 to N (for loop while loop and do-while loop)


// int n ;
// cout<<"enter last number you want";
// cin>>n;

// int sum =0  ;


// for (int  i =1 ; i<=n;i++)

// {

// if (i%2!=0){
//   sum=sum+i ;


// }



// }
// cout<<sum;


// int n  ;
// cout<<"enter last number you want";
// cin>>n;

// int sum =0  ;
// int i = 0;

// while ( i<=n)
// {
// if (i%2!=0){
//   sum=sum+i ;


// }
// i++;
// }
// cout<<sum;



// int n  ;
// cout<<"enter last number you want";
// cin>>n;

// int sum =0  ;
// int i = 0;

// do 
// {
// if (i%2!=0){
//   sum=sum+i ;


// }
// i++;
// }while ( i<=n);
// cout<<sum;

// 5. Count digits in a number (while and do-while)


// int i = 1 , n , count=0;
// cout<<"enter the value of n ";
// cin>>n;

// for ( ; n>0; n=n/10)
// {
//     count++;
// }
// cout<<"no of digits " << count;

// while (n>0)
// {
//     n=n/10;
//     count++;
// }
// cout<<"no of digits " << count;

// do 
// {
//     n=n/10;
//     count++;
// }  while (n>0);
// cout<<"no of digits " << count;



// int n,sum=0 ;
// cout<<"enter the value of n \n";
// cin>>n;



// while (n!=0)
// {
//     int digit = n %10;
//     sum = sum*10+digit;
//     n = n / 10;
// }

// cout<<sum;




// do 
// {
//     int digit = n %10;
//     sum = sum*10+digit;
//     n = n / 10;
// }while (n!=0);

// cout<<sum;


// 7. Check if a number is a palindrome ( using while and do-while loop )

// int n,sum=0 ;
// cout<<"enter the value of n \n";
// cin>>n;
// int temp=n;


// while (n>0)
// {
//     int digit = n %10;
//     sum = sum*10+digit;
//     n = n / 10;
// }

// cout<<"reverse no "<<sum<<endl;

// if (temp==sum)
// {
//     cout<<"pallindrome no .";
// }

// else {
//     cout<<"not a palindrome";
// }


// 8. Find factorial of a number (for loop while loop and do-while loop)
// int n ;
// cout<<"enter n";
// cin>>n;
// int sum =1;

// for ( int i =1 ; i<=n; i++)
// {
//     sum=sum*i;
// }

// cout<<sum;


// int i =1;

// while (i<=n)
// {
//      sum=sum*i;
//      i++; 
// }
// cout<<sum;



// int i =1;

// do
// {
//      sum=sum*i;
//      i++; 
// }while (i<=n);
// cout<<sum;



// int n ;
// cout<<"enter number to print their table";
// cin>>n;

// for (int i =1; i<=10 ; i++)
// {
//     cout<<i << " " <<n*i <<endl;
    
// }

// int i =1 ;
// while (i<=10)
// {
//         cout<<i << " " <<n*i <<endl;
//  i++;
// }



// int i =1 ;
// do 
// {
//         cout<<i << " " <<n*i <<endl;
//  i++;
// }while (i<=10);


// 10. Print all divisors of a number (for while and do-while)

// int n ;
// cout<<"enter number to print their divisors";
// cin>>n; 

// for (int i =1; i<=n ; i++)
// {
//     if (n%i==0)
//     {
//         cout<<i<<endl;
//     }
    
// }

// int i = 1;
// while (i<=n)
// {
//   if (n%i==0)
//     {
//         cout<<i<<endl;
//     } 
//   i++;
// }


// int i = 1;
// do 
// {
//   if (n%i==0)
//     {
//         cout<<i<<endl;
//     } 
//   i++;
// }while (i<=n);

// 11. Check if the number is prime


int i , count=0 , i=1;








    return 0;
}
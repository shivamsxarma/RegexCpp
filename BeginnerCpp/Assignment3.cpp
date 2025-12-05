#include <iostream>
using namespace std;
int main()
{
    // 1. Write a program where user enters a number. If number is positive, call a function Positive(). If
    // negative, call a function Negative().

    // int EnterNumber;
    // cout<<"Enter a number to check";
    // cin>>EnterNumber;
    // if (EnterNumber<0)
    // {
    //     cout<<"Number is negative";
    // }
    // else if (EnterNumber==0)
    // {
    //     cout<<"Number is zero";
    // }
    // else{
    //     cout<<"Number is Positive ";
    // }

    // 2. Write a program where user enters an age. If age is greater than 18, call function Adult(). Else,
    // call function Minor().

    //    int EnterAge;
    // cout<<"Enter Age to check";
    // cin>>EnterAge;
    // if (EnterAge<18)
    // {
    //     cout<<"You Are Minor";
    // }

    // else if (EnterAge>=18){
    //     cout<<"YOu Are Adult ";
    // }

    // 3. Write a program to check if a number is divisible by 5. If yes, call DivisibleBy5(). Else, call
    // NotDivisibleBy5().

    //  int EnterNumber;
    //     cout<<"Enter a number to check";
    //     cin>>EnterNumber;
    //     if (EnterNumber%5==0)
    //     {
    //         cout<<" Divisible By 5";
    //     }
    //     else
    //     {
    //         cout<<"Not Divisible By 5";
    //     }

    // 4. Write a program where user enters marks. If marks >= 50, call function Pass(). Else, call Fail().

    //  int EnterMarks;
    //     cout<<"Enter a number to check";
    //     cin>>EnterMarks;
    //     if (EnterMarks >=50)
    //     {
    //         cout<<" Pass";
    //     }
    //     else
    //     {
    //         cout<<"Fail ";
    //     }

    // 5. Write a program where user enters temperature. If temperature > 30, call Hot(). Else if
    // temperature < 10, call Cold(). Else, call Moderate().

    //  int EnterTemp;
    //     cout<<"Enter temprature to check";
    //     cin>>EnterTemp;
    //     if (EnterTemp > 30)
    //     {
    //         cout<<" Hot";
    //     }
    //     else if (EnterTemp < 10)
    //     {
    //         cout<<"Cold ";
    //     }
    //     else{
    //         cout<<"Moderate";
    //     }

    // 6. Write a program to check if a character entered is a vowel. If yes, call Vowel(). Else, call
    // Consonant().

    // char Check;
    // cout<<"Enter Character to check if a character entered is a vowel or not";
    // cin>> Check;
    //  if(Check =='A'|| Check=='E'|| Check== 'I'  ||  Check== 'O'  || Check== 'U'  || Check==  'a'|| Check=='e'|| Check== 'i'  || Check== 'o'  ||  Check=='u' )

    // {
    //  cout<<"Character is Vovel";
    // }

    // else
    // {
    //     cout<<"Character is Consonant";
    // }

    // 7. Write a program where user enters a number. If number is even, call Even(). Else, call Odd().

    // int CheckNum;
    // cout<<"Enter num to check is number is odd or even";
    // cin>>CheckNum;
    // if (CheckNum%2==0)
    // {
    //     cout<<"Enter  number is  Even";
    // }
    // else{
    //       cout<<"Enter  number is  Odd";
    // }

    // 8. Write a program where user enters salary. If salary > 50000, call HighSalary(). Else, call
    // LowSalary().

    // int CheckSalary;
    // cout<<"Check Salary";
    // cin>>CheckSalary;
    // if (CheckSalary>50000)
    // {
    //     cout<<"HighSalary";
    // }
    // else{
    //       cout<<"LOw salary";
    // }

    // 9. Write a program where user enters speed of vehicle. If speed > 80, call OverSpeed(). Else, call
    // NormalSpeed().

    // int CheckSpeed;
    // cout<<"Enter Speed";
    // cin>>CheckSpeed;
    // if (CheckSpeed>80)
    // {
    //     cout<<" OverSpeed";
    // }
    // else{
    //       cout<<"NormalSpeed";
    // }

    // 10. Write a program where user enters a year. If year is divisible by 4, call LeapYear(). Else, call
    // NotLeapYear().

    // int LeapYear;
    // cout<<"Enter year to check ";
    // cin>>LeapYear;
    // if(LeapYear%4==0)
    // {
    //     cout<<" Leap year";
    // }
    // else{
    //     cout<<"not a leap year";
    // }

    // 2. Write a program to find the greatest of three numbers using if-else.

    // int a;
    // int b;
    // int c;
    // cout<<"enter Num 1"<<endl;
    // cin>>a;
    // cout<<"enter Num 2"<<endl;
    // cin>>b;
    // cout<<"enter Num 3"<<endl;
    // cin>>c;

    // if (a>b && a>c)
    // {
    //     cout<<" A is gratest ";
    // }
    //  else if (b>a && b>c)
    // {
    //     cout<<" B is gratest ";
    // }
    //  else if (c>a && c>a)
    // {
    //     cout<<" C is gratest ";
    // }

    // loops

    // 10. Write a program using for loop to print the first 10 natural numbers.

    // for (int i = 1; i <=10; i++)
    // {
    //    cout<<i;
    //    cout<<endl;
    // }

    // 11. Write a program using for loop to calculate the factorial of a number.

    // int Number;
    // cout << "Enter a number to find its factorial: ";
    // cin >> Number;

    // int factorial = 1;
    // for (int i = 1; i <= Number; i++) {
    //     factorial *= i;
    // }
    // cout << "Factorial of " << Number << " is: " << factorial << endl;

    // 12. Write a program using for loop to print the multiplication table of a given number.
    // int Multiplication;
    // cout<<"Enter number";
    // cin>>Multiplication;
    // for (int i = 1; i <=10; i++)
    // {
    //     cout<<Multiplication<<"X"<<i<<"="<<Multiplication*i<<endl;
    // }

    // 13. Write a program using while loop to print numbers from 1 to 50.

    // for (int i = 1; i <=50; i++)
    // {
    //     cout<<i<<endl;
    // }

    // int i =1;
    // while (i<=50 )
    // {
    //   cout<<i <<endl;
    //   i++;
    // }

    // 14. Write a program using while loop to calculate the sum of digits of a number.
    // int num;
    // cout<<"enter num";
    // cin>>num;
    // int sum;

    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // int sum = 0;
    // while (num > 0) {
    //     sum += num % 10;
    //     num = num / 10;
    // }
    // cout << "Sum of digits is: " << sum << endl;

    // Write a program using while loop to calculate the sum of digits of a number.

    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // int reverse= 0,r;
    // while (num > 0) {
    //     r = num % 10;
    //     reverse=reverse*10+r;
    //     num = num / 10;
    // }
    // cout << "Sum of digits is: " << reverse << endl;

    // 16. Write a program using do-while loop to print numbers from 1 to 10.
    //  int i;
    //  i=1;
    //  do
    //  {
    //      cout<<i << " ";
    //      i++;
    //  } while (i<=10);

    // 17. Write a program using do-while loop to take input until the user enters 0.

    // int i;

    // do
    // {
    //     cout<<"enter number ";
    //     cin>>i;
    //     if (i==0)
    //     {
    //         break;
    //     }

    // } while (i!=0);

    // 18. Write a program using do-while loop to calculate the sum of first N natural numbers.

    int num;
    cout<<"enter number ";
    cin>>num ;
    int sum =0;
    int i=0;
    do
    {
       sum=sum+i;
       i++;
    } while (i<=num);
    cout<< sum;

//     int num;
//     cout << "enter number";
//     cin >> num;
//     for (int i = 2; i <num; i++)
//     {
//         if (num % i == 0)
//         {

//             cout << " not prime ";
//             return 0;
//         }
//     }
//     cout<<" its prime";

// 20. Write a program combining if-else and loops to find the largest element in an array.

int arr[6] = {3,4,8,5,6,7};
int largest = arr[0];
for (int i = 0; i <6; i++)
{
 if (arr[i]>largest)
 {
    largest=arr[i];
 }
 
    
}
cout<<largest;

    return 0;
}



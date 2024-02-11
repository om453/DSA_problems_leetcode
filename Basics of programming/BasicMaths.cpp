//* Problem Statement: Given an integer N, write a program to count the number of digits in N.

#include<iostream>
using namespace std;


// int main()
// {
//       int N;
//       cin>>N;
//       int count = 0;
//       while (0 < N)
//       {
//     N = N/10;
//         count++;
//       }
//    cout<<count;      
//     return 0;
// }


//* Problem Statement: Given a number N reverse the number and print it.
// int main()
// {
//     int n;
//     cin>>n;
//     int lastdigit;
//     int reverseNum = 0;
//     while (n>0)
//     {
//         lastdigit = n % 10;  // we do (n % 10) it will always return the last digit of the number
//         reverseNum = (reverseNum * 10) + lastdigit;

//         n = n/10;    // number gets decreased by one
//     }
//     cout<<"reverse order is :" << reverseNum;
// }


//* Problem Statement : Check if a number is Palindrome or Not
// class Solution {
// public:
//     bool isPalindrome(int x) {
        
//     long long reverseNum = 0;     //long long will ensures that the code can handle a wider range of input values without encountering overflow issues.
//     int dummy = x;

//     while (x > 0)
//     {
//       int lastdigit = x % 10; 
//         reverseNum = (reverseNum * 10) + lastdigit;
//         x = x/10; 
//     }  

// if(x<0)
// {
//     return false;
// }

// if(reverseNum == dummy){
//     return true;
// }
// else{
//     return false;
// }

//     }
// };
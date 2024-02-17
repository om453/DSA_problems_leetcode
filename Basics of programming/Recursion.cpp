#include <iostream>
using namespace std;

//* Print the name N number of times by using recursion
// void printName(int i, int n)
// {
//     if (i > n)
//     {
//         return;
//     }
//     cout << "Om Patel" << endl;
//     printName(i + 1, n);
// }

//* Print the 1 to N by using recursion
// void printNum(int i, int n)
// {
//     if (i > n)
//     {
//         return;
//     }
//     cout<<i<<endl;
//     printNum(i + 1, n);
// }

//* Print the N to 1 by using recursion
// void printNum(int i, int n)
// {
//     if (i < 1)
//     {
//         return;
//     }
//     cout<<i<<endl;
//     printNum(i - 1, n);
// }

//* Print the sum by using recursion
// void printSum(int sum , int n )
// {
//     if(n < 1)
//     {
//         cout<<sum;
//         return;
//     }
//     printSum(sum += n , n - 1 );

// }

//* find Factorial of a Number by recursion
// int findFactorial(int n)
// {
// if (n == 0)
// {
//     return 1;
// }

// return n * findFactorial(n - 1);

// }


// 
void printArray(int ans[]) {
  cout << "The reversed array is:- ";
   for (int i = 0; i < 5; i++) {
      cout << ans[i] << " ";
   }
}

int reverseArray(int arr[] , int start , int end){
if (start>=end){
    return 0;
}

swap(arr[start] , arr[end]);
reverseArray(arr, start + 1, end - 1);


return 0;
}


int main()
{
    // int n;
    // int i;
    // cout << "Enter the number of input for n ";
    // cin >>n;
    // cout << "Enter the number of input for i ";
    // cin >> i;


    // printName(1, n);
    // printNum(i, n);
    // printNum(i, n);
    // printSum(0 , n);

    //  int result = findFactorial(n);
    // cout << "The factorial of " << n << " is " << result;

int n = 5;
int arr[] = {1, 2, 3, 4, 5};

reverseArray(arr , 0 ,  n-1);
printArray(arr);

    return 0;
}

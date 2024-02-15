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

void printSum(int sum , int n )
{
    if(n < 1)
    {
        cout<<sum;
        return;
    }
    printSum(sum += n , n - 1 );

}

int main()
{
    int n;
    // int i;
    cout << "Enter the number of input for n ";
    cin >> n;
    // cout << "Enter the number of input for i ";
    // cin >> i;


    // printName(1, n);
    // printNum(i, n);
    // printNum(i, n);
    printSum(0 , n);
    
    return 0;
}

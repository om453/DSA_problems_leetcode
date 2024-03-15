#include <bits/stdc++.h>
using namespace std;

void pattern5(int N)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < N; i++)
    {
        // This is the inner loop which loops for the columns
       // no. of columns = (N - row index) for each line here.
    //  can also use for(int j=0; j<N-i+1; j++)
        for (int j =N; j>i; j--)
        {
            cout <<"* ";
        }
       
        // As soon as stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }
}

int main()
{   
    // Here, we have taken the value of N as 5.
    // We can also take input from the user.
    int N = 5;

    pattern5(N);

    return 0;
}
#include<iostream>
using namespace std;

// Function are used to use same code multiple times

// void -> which does not returns anything
// return 
// parameterized
// non parameterized

// void printName(string name)
// {
//     cout<<"Hey!"<<name;
// }

// int sum(int num1, int num2)
// {
//     int num3 = num1 + num2;
//     return num3;
// }

// void passByValue(int num)
// {
//     num += 5;
//    cout<<num <<" ";
// }


//* just add & while running pass by value 
void passByValue(int &num)
{
    num += 5;
   cout<<num <<" ";
}

int main()
{
    //   string name;
    //   cin>>name;
    //   printName(name);

// int num1,num2;
// cin>>num1>>num2;
// int res = sum(num1,num2);
// cout<<res;


//? Pass by value - sending the copy of value 
 
int num = 10;
passByValue(num);
cout << num ;
    return 0;
}
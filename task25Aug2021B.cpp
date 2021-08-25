#include <iostream>
using namespace std;
int main()
{
    /*
          *   *
           * *
            *
    */
int input ;
cout << "Enter any number : ";
cin >> input ;
int temp1 = input;
int temp = input;
for(int i = input; i >= 1; i--)
{
    for(int j = input; j >= temp; j--)
    cout << "  ";
    for(int k = 1; k <= i; k++)
    if(k == 1 || k == i )
    cout << " * ";
    else 
    cout << "   ";
    temp--;
    cout << endl;    
}
/*
*    *
 *  *
   *


*/
for(int i = 1; i <= input; i++)
{
    for(int j = temp1; j>=1; j--)
    cout << "  ";
    for(int k = 1; k<=i; k++)
    if(k == 1 || k == i)
    cout << " * ";
    else
    cout << "   ";
    
    
    
    temp1--;
    cout << endl;
}

}
#include <iostream>
using namespace std;
int main()
{
int input ;
cout << "Enter any number : ";
cin >> input ;
int temp = input-1;

for(int i = 1; i<=input; i++)
{
    for(int k = input; k>=1; k--)
    if( i == 1 || i == input || k == i )
    cout << "*";
    else cout << " "; 
    

    
    cout << endl;temp--;
}




}
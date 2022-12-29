#include <iostream>
#include <conio.h>
using namespace std;
int a, i,t;
int main()
{
    cout<<"enter number for table\n";
    cin>> a;
    int i=1;
    while (i<=10)
    {
        t=a*i;
        cout<<a<<"x"<<i<<"="<<t<<"\n";
        i++;
    }
    getch();
   
   
};
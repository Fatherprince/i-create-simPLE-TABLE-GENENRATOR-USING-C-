#include <iostream>
using namespace std;
int a[2]={};
int main()
{
    cout<<"enter number for table";
    for(int i=0;i<2;i++)
    {
        cin>>a[i];
        
    }
    for(int j:a)
    {
        cout<<j<<"table is"<<endl;
        int k =j;
        
        while(k<j*11)
        {
            cout<<k<<"\n";
            k=k+j;
        }
    }
    getwchar();
};
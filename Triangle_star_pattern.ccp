#include <iostream>
using namespace std;

int main() 
{
    int row , col , n ;
    cout<<"enter the value of n " ;
    cin>>n;
    
    cout<<endl;
    
    {
        for(row=1;row<=n;row=row+1)
        {
            for(col=1;col<=row;col=col+1)
            {
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    }
}

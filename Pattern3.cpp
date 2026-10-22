#include <iostream>
using namespace std;

int main() 
{
    int row,col,n;
    cout<<"enter value of n " ;
    cin>>n;
    
    
    // create loop
    for(row=n;row>=1;row=row-1)
    {
        // print space 
        for(col=1;col<=n-row;col=col+1)
        cout<<" ";
        
        // print (*)
        for(col=1;col<=2*row-1;col=col+1)
        cout<<"*" ;
        
        cout<<endl;
    }
} 

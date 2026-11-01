#include <iostream>
using namespace std;

int main() 
{
    int row,col,n ;
    cout<<"enter value of n " ;
    cin>>n;
    cout<<endl;
    
    {
        for(row=1;row<=n;row=row+1)
        {
            // print (*)
            for(col=1;col<=row;col=col+1)
            cout<<"* "  ;
            
            // print space 
            for(col=1;col<=n*2-2*row;col=col+1)
            cout<<"  ";
            
            // print (*)
            for(col=1;col<=row;col=col+1)
            cout<<"* " ;
            
            cout<<endl;
            
        }
        
        for(row=n-1;row>=1;row=row-1)
        {
            // print (*)
            for(col=1;col<=row;col=col+1)
            cout<<"* " ;
            
            // print space 
            for(col=1;col<=n*2-2*row;col=col+1)
            cout<<"  ";
            
            // print (*)
            for(col=1;col<=row;col=col+1)
            cout<<"* " ;
            
            cout<<endl;
            
        }
    }
}

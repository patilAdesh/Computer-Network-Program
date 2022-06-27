#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=0, count=0;
    char databits[80];
    
    cout<<"Enter the databits(don't use space after every bit): "; cin>>databits;
    
    cout<<"\nData before bit stuffing: "<<databits;
    cout<<"\nData after bit stuffing: ";
    
    for(i=0;i<strlen(databits);i++)
    {
        if(databits[i]=='1')
            count++;
        else
            count=0;
        cout<<databits[i];
        
        if(count==5){
            cout<<"0";
            count=0;
        }
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
int row,column;
cout<<"ENTER NO OF ROWS : ";
cin>>row;
cout<<"ENTER NO OF COLUMN : ";
cin>>column;

for (int i=1; i<=row; i++)
{
    for ( int j=1; j<=column; j++)
    {
        cout<<"*";
    }
    cout<<endl;
}






return 0;
}
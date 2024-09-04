#include<iostream>
using namespace std;
int mult(int a, int b);
int main(){int num1,num2;
cout<<"ENTER FIRST NUMBER : ";
cin>>num1;
cout<<"ENTER SECOND NUMBER : ";
cin>>num2;
cout<<"THE ANSWER IS : "<<mult(num1,num2);

return 0;
}
int mult( int a, int b){
int c=a*b;
return c;

}
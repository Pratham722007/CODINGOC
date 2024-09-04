#include<iostream>
using namespace std;
float factorial (float n){
    if(n<=1){
        return 1;
    }
return n*factorial(n-1);
}
int main(){
    float a;
cout<<"ENTER A NUMER : ";
cin>>a;
cout<<"THE FACTORIAL OF A THIS NUMBER IS : "<<factorial(a);
return 0;
}
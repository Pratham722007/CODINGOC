#include<iostream>
using namespace std;
void swap(int* a,int* b){
int temp;
temp=*a;
*a=*b;
*b=temp;


}



int main(){
    int a=4;
    int b=5;
cout<<a<<b;
swap(&a,&b);
cout<<a<<b;
return 0;
}
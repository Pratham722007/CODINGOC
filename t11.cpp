#include<iostream>
using namespace std;
union money
{
    int rice;
    char car;
    float pound;
};




int main(){
    union money m1;
    m1.rice=34;
    cout<<m1.rice;
     m1.car='c';
return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"TELL ME YOUR AGE :  "<<endl;
    cin>>age;

    if(age<18){

        cout<<"YOU CANNOT COME TO THE PARTY"<<endl;
    }
    
    else if (age==18)
    {
        cout<<"YOU CAN COME ONLY IF YOU HAVE A KID PASS "<<endl;

    }
    
else{
    cout<<"YOU CAN COME TO THE PARTY"<<endl;
}

    return 0;
}

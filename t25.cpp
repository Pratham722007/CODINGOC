#include<iostream>
using namespace std;
class employee{
private:
int a,b,c;
public:
int d,e;
void setdata(int a,int b,int c);
void getdata(){
cout<<"value of a is "<<a <<endl;
cout<<"value of b is "<<b<<endl;
cout<<"value of c is "<<c<<endl;
cout<<"value of d is "<<d<<endl;
cout<<"value of e is "<<e<<endl;

}

};


void employee :: setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
    
    }
int main(){
employee pratham;
pratham.d=12;
pratham.e=13;
pratham.setdata(1,2,3);
pratham.getdata();
return 0;
}
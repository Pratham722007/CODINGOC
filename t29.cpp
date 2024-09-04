#include<iostream>
using namespace std;
class employee{
int id;
static int count;


public:
void setdata(void){
    cout<<"enter the id"<<endl;
    cin>>id;
    count++;
    }
void getdata(void){
    cout<<"the id is "<<id<<" of employee no" <<count<<endl;
}


};
int employee::count;
int main(){
employee p,q,r;
p.setdata();
p.getdata();
q.setdata();
q.getdata();
r.setdata();
r.getdata();


return 0;
}
// nesting of member function
// oops   classes and objects
    // c++    intialy called c with classes by stroustroup
    // class   extention of structure
    //  structure had limitation
    //  ----> members are public
    //-----> no methods
    // classes = structure +more
    // classes can have methods  and property
    // classes   can make few member as private and public

    // structure in c++ are typedef
    // u can declare object along with class declaration
    /*class Employee{
    // class defination }
    prince,harry,rohan */
    // prince.salary     it dont make any sence if salary is private

    // nesting of member function
    
#include <iostream>
#include <string>
using namespace std;
class binary
{
    private://if u not write public then also it will be fine as it is considerd private by default
    string s;

public:
    void read(void);//will read wether the no is binary or not
    void chk_bin(void);//will check wheter it is binary or not
    void ones(void);//will change 1 to 0 and 0 to 1
    void display(void); //will display the no
};

void binary ::read(void)
{
    cout << "enter a binary number" << endl;
    cin >> s;
}
void binary :: chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary:: ones(void)                                      //understand ones as compliment
{
     for (int i = 0; i < s.length(); i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
         else
         {
            s.at(i)='0';
        }
     }
 
}
void binary:: display(void)
{
    cout<<"displaying your binary number "<<endl;
     for (int i = 0; i < s.length(); i++)
     {
        cout<<s.at(i);
     }
 
}
int main()
{
    binary b;
    b.read();
    b.chk_bin();
     b.display();
    b.ones();
    b.display();
return 0;
}
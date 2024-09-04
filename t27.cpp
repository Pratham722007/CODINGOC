#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string s;

public:
    void read(void);
    void display(void);
    void check(void);
    void bswap(void);
};

void binary::read(void)
{
    cout << "enter the binary number" << endl;
    cin >> s;
}
void binary::check(void)
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
void binary::bswap(void){
for (int i = 0; i < s.length(); i++)
{
    if(s.at(i)=='0'){
        s.at(i)='1';
    }
    else{
        s.at(i)='0';
    }
}


}
void binary::display(void){
    cout<<"DISPLAYING A BINARY NUMBER"<<endl;
    for (int i = 0; i <s.length(); i++)
    {
        cout<<s.at(i);
    }
    
}
int main()
{binary b;
b.read();
b.check();
b.display();
b.bswap();
b.display();
    return 0;
    
}
#include<iostream>
using namespace std;
class Demo
{
    public:
    int a;
    int b;
    Demo()
    {
    a=20;
    b=10;
    cout<<"Inside of Demo constructor"<<endl;

    }
    ~Demo()
    {
        cout<<"Inside of Demo destructoer "<<endl;

    }
    void fun()
    {
        cout<<"Inside fun of Demo"<<endl;

    }
};
//chaild class
class Hello : public Demo
{
    public:
    int X;
    int Y;
    Hello()
    {
        X=20;
        Y=30;
        cout<<"Inside Hello constructor"<<endl;

    }
    ~Hello()
    {
        cout<<"Inside Hello destructor"<<endl;

    }
    void gun()
    {
        cout<<"Inside gun of Hello"<<endl;

    }
};
class PPA: public Hello
{
public:
int i;
int j;
PPA()
{
    i=11;
    j=220;
    cout<<"Inside PPA constructor"<<endl;

}
~PPA()
{
    cout<<"Inside of PPA destructor "<<endl;
}
void sun()
{
   cout<<"Inside of sun "<<endl;

}
};
int main()
{
    PPA obj;
    obj.fun();
    obj.gun();
    obj.sun();

    cout<<obj.a<<endl;
    cout<<obj.b<<endl;
    cout<<obj.X<<endl;
    cout<<obj.Y<<endl;
    cout<<obj.i<<endl;
    cout<<obj.j<<endl;
    cout<<"end of main"<<endl;
    return 0;
    
}


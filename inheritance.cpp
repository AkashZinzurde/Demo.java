#include<iostream>
using namespace std;
// parent class
class Demo
{
 public:
 int A,B;
 Demo()
 {
    cout<<"Inside Demo constructor"<<"\n";

 }
 void fun()
 {
    cout<<"Inside fun of Demo"<<"\n";
 }

};
//child class
class Hello : public Demo // class hello extends Demo
{
    public: 
    int X,Y;
    Hello()
    {
        cout<<"Inside hello constructor"<<"\n";

    }
    ~Hello()
    {
        cout<<"Inside hello destructor"<<"\n";

    }
   
    void gun()
    {
        cout<<"Inside gun of hello"<<"\n";
    }

};
int main()
{
    Hello hobj;

    return 0;
}
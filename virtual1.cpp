#include<iostream>
using namesapce std;
class base
{
 public: 
 int A,B;
 void fun() //1000
 {
    cout<<"Inside fun of base"<<"\n";
 }
 void gun() //2000
 {
    cout<<"Inside gun of base"<<"\n";

 }
 void sun()
 {
    cout<<"Inside sun of base"<<"\n";
 }
};
 class derived
 {
    public:
    int X;
    int Y;
    void fun() //4000
    {
        cout<<"Inside fun of derived"<<"\n";
    }
    void gun() //5000
    {
        cout<<"Inside gun of derived"<<"\n";

    }
    void sun() //6000
    {
        cout<<"Inside sun of derived"<<"\n";

    }
 };
 void main()
 { 
    cout<<"Size of base :"<<sizeof(base)<<"\n";
    //8
    cout<<"Size of derived :"<<sizeof(derived)<<"\n";//16
    base *bp = new base; //no casting 
    derived *dp = new derived;// no casting
    base *bp1 = new derived;// up casting
//derived *dp1 = new base;
//down casting (no aalowed)
return 0;
 }
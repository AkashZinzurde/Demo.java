#include<iostream>
using namespace std;
class Demo
{
    public:
    int a;
    int b;
   virtual void fun() // 1000
    {
cout<<"Inside fun of Demo"<<"\n";

    }
   virtual void gun()// 2000
    {
        cout<< "Inside  gun of Demo"<<"\n";
    }
     virtual void sun() // 3000
     {
        cout<<"Inside  sun Demo "<<"\n";

     }
     
};
class memo : public Demo
{
public:
int X;
int Y;
void fun() // 4000
{
    cout<<"Inside fun of memo"<<"\n";
}
virtual void sun()
{
cout<<"Inside sun of memo"<<"\n";
}
virtual void run() //6000
{
    cout<<"Inside run of memo"<<"\n";

}

};
int main()
{
    cout<<"Size of Demo : "<<sizeof(Demo)<<"\n";
    // 8
    cout<<"Size of memo : "<<sizeof(memo)<<"\n"; //16
     Demo *bp = new memo; // up casting
     // (Allowed)
     bp->fun(); //memo fun
     bp->gun();// Demo gun
     bp->sun();// memo sun
     return 0;
}



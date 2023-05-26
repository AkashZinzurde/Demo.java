#include<iostream>
using namespace std;
class Bace
{
    public:
    int A=0;
    int B=0;


    Bace()
{ 
    int A=10;
    int B= 30;
cout<<"inside of constructor bace "<<endl;
}
~Bace()
{
    cout<<"inside of destructor  bace"<<endl;
}
};
class diravide : public Bace 
{
    public:
    int X=0;
    int Y=0;
    
diravide()
{
    int X=10;
    int Y=30;
    cout<<"inside of diravide constructor"<<endl;


} 
~diravide()
{
    cout<<"inside of diravide destructor"<<endl;
}
   
};
int main()
{
    diravide obj;
    
    return 0;
    
}
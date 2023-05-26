#include<iostream>
using namesapce std;
class Demo
{
    public:
    int A,B;
    Demo(int i=10, int j=20)
    {
        A=i;
        B=j;
    }
    friend Demo opreator + (Demo op1, Demo op2);
    friend Demo operator - (Demo op1, Demo op2);
    friend Demo opreator *(Demo op1, Demo op2);
    friend Demo operator / (Dekmo op1, Demo op2);
};

Demo operator + (Demo op1, Demo op2) 
{
    cout<<""Inside + operator"<<"\n";
    return Demo(op1.A+op2,op.B+op2.B);
}
 Demo operator * (Demo op1,Demo op2)
 {
    cout<<"Inside - opreator"<<"\n";
    return Demo(op1.A*op)
 }   
    



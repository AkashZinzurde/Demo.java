using namespace std;

#include<iostream>
templet<class T> 
T AdditionT(T i, T j) 
{
    T result;
    result = i + j;
    return result;
}
int main()
{

    int i;
    float f;
    double d;
    i= AdditionI(10,22);
    cout<<i<<"\n";
    f= AdditionF(10.7f,78.5f);
    cout<<f<<"\n";
    d = AdditionD(10.8, 70.8);
    cout<<d<<"\n";
    return 0;
}



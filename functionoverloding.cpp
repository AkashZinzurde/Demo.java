#include<iostream>
using namespace std;
class Demo1
{
    public:
    int ans=0;
    int fun(int a, int b)
    {
        ans=a+b; // two veriable addtion
        cout<<"addition"<<ans<<endl;
    
    }
    int fun(float a,float b)
    {
            ans=a*b;
            cout<<"multiplication"<<ans<<endl;
    }
int fun(int a)
{
ans= a*a;
cout<<"sqaure of a"<<ans<<endl;
}
int fun(float b)
{
    ans=b*b*b;
    cout<<"cube of b"<<ans<<endl;

}

};
int main()
{
    Demo1 obj;
    obj.fun(10,20);
    obj.fun(2.0f,2.0f);
    obj.fun(10);
    obj.fun(40.5f);
    return 0; 
    }
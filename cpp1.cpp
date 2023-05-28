#include<iostream.h>
#include<conio.h>
using namespace std;
void square(int &x)
{
    x=x*x
}
int main()
{
    int num=5;
    cout<<"Before calling square(),num="<<num<<endl;
    square (num);
    cout<<"After calling square(),num="<<num<<endl;
    return 0;
}
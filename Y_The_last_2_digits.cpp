#include<iostream>
using namespace std;
int main()
{
    int a,b,c,e;
    cin>>a>>b>>c>>e;
    a=a%100;
    b=b%100;
    c=c%100;
    e=e%100;
    int t=a*b*c*e;
    if(t%100<=9)cout<<0;
    cout<<t%100;

}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,q,t;
    char s,p;
    cin>>a>>s>>b>>p>>q;
    if(s=='+')
    {
        t=a+b;
        if(t==q)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<t<<endl;
        }
    }
    else if(s=='-')
    {
        t=a-b;
        if(t==q)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<t<<endl;
        }
    }
    else if(s=='*')
    {
        t=a*b;
        if(t==q)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<t<<endl;
        }
    }
    return 0;
}
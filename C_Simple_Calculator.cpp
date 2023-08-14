#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int X,Y;
    cin>>X>>Y;
    int summation=X+Y;
    long long int multiplication=X*Y;
    int subtraction=X-Y;
    cout<<X<<" + "<<Y<<" = "<<summation<<endl;
    cout<<X<<" * "<<Y<<" = "<<multiplication<<endl;
    cout<<X<<" - "<<Y<<" = "<<subtraction<<endl;
    return 0;
}
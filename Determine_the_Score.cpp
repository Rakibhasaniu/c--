#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int point,test;
        cin>>point>>test;
        point = point/10;
        cout<<test*point<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int k,x;
        cin >>k>> x ;
        int total = k* x;
        if(total >=10000 && total <=99999){
            cout<<"YES"<<endl;

        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
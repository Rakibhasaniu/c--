#include<bits/stdc++.h>
using namespace std;
int main ()
{
     int t;
     cin >> t;
     while (t--) {
        int x,range,y;
        cin>>x>>y;
        range = x + 200;
        if(y <= range && y>=x ){
        cout<<"YES"<<endl;
    } else {
        cout << "NO" << endl;
    }
        }
    return 0;
}
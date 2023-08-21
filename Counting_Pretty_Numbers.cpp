#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--) {
        int l,r;
        cin>>l>>r;
        int count = 0;
        for(int i=l;i<=r;i++){
            int lastDigit = i % 10;
            if(lastDigit == 2 || lastDigit == 3 || lastDigit == 9){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
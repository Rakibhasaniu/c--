#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int start38=0;
        int ltime108=0;
        for(int i=0;i<n;i++){
            if(arr[i]=="START38"){
                start38++;
            } else {
                ltime108++;
            }
        }
        cout<<start38<<" "<<ltime108<<endl;
    }
    return 0;
}

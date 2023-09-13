#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int sum_1=0;
        int sum_2=0;
        for (int j = 0; j < 3; j++)
        {
            sum_1 =sum_1+ s[j] - '0';
        }
        for (int j = 3; j < 6; j++)
        {
            sum_2 =sum_2+ s[j] - '0';
        }
        if(sum_1 == sum_2){
            cout<<"YES"<<endl;
        } else {
            cout<< "NO" << endl;
        }
        
    }
    return 0;
}
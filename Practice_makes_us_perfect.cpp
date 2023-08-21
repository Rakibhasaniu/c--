#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int p1,p2,p3,p4;
    cin>>p1>>p2>>p3>>p4;
    int x=10;
    int count = 0;
    if(p1>=x){
        count++;
    };
    if(p2>=x){
        count++;
    } 
    if(p3>=x){
        count++;
    } 
    if(p4>=x){
        count++;
    }
    cout<<count<<endl;
    return 0;
}
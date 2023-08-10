#include<iostream>
using namespace std;

// int my_min(int a,int b)
// {
//     if(a<b) return a;
//     else return b;
// }

int main ()
{

    int a,b;
    cin>>a>>b;
    // int result = min(a,b);
    int result = max(a,b);
    cout<<result<<endl;
    return 0;
}
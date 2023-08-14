#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int A,B,C;
    cin>>A>>B>>C;

    int min_case=min(A,B);
    int result_1=min(min_case,C);
    int first_case=max(A,B);
    int result = max(first_case,C);
    cout<<result_1<<" ";
    cout<<result<<endl;

    return 0;
}
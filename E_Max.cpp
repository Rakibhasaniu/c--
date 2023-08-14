#include<bits/stdc++.h>
#include <algorithm>

using namespace std;
int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maximum=*max_element(arr,arr+n);
    cout<<maximum<<endl;

    return 0;
}
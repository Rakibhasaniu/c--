#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
        char name[100];
        int roll;
        int cls;
};
int main ()
{
    Student rakib;
    rakib.roll=29;
    rakib.cls=9;
    char nm[100]="Rakib";
    strcpy(rakib.name,nm);

    Student karim;
    karim.roll=55;
    karim.cls=9;
    char nm2[100]="Karim";
    strcpy(karim.name,nm2);

    // cout<<rakib.roll<<endl;
    cout<<karim.name;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int t;
    long n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       cin>>n;
       long res;
       res=((n/3)*2)+(n/2)*2+n;
       cout<<res<<endl;
    }
    return 0;
}

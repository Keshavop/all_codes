#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,a,b,m,n,d,ans1=0,ans2=0;
    cin>>s>>t>>a>>b>>m>>n;

    for (int i = 0; i < m; i++)
    {
        cin>>d;
        d=a+d;
        if (d>=s && d<=t)
        {
            ans1++;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cin>>d;
        d=b+d;
        if (d>=s && d<=t)
        {
            ans2++;
        }
    }
    cout<<ans1<<endl<<ans2<<endl;
    return 0;
}
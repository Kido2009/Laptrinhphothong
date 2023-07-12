#include<bits/stdc++.h>
using namespace std;
long long a,b,c,n,res,sum,x,y,z;
int main()
{
    cin>>a>>b>>c;
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>x>>y>>z;
        res+=x*29*17+y*29+z;
    }
    sum=a*29*17+b*29+c;
    if(sum<res) cout<<-1;
    else
    if(sum==res) cout<<0<<" "<<0<<" "<<0;
    else {
        sum=sum-res;
        a=sum/(29*17);
        sum-=a*29*17;
        b=sum/29;
        sum-=b*29;
        cout<<a<<" "<<b<<" "<<sum;
    }
}

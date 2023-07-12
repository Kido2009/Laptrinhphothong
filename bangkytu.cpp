#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll n,m,b[50],c[50],u,ln;
char a[105][105];
int main()
{
    cin>>n;
    for(ll i=1;i<=n;i++)
    for(ll j=1;j<=n;j++) {
    cin>>a[i][j];
    u=(ll)a[i][j]-48;
    b[u]++;
    c[u]=b[u];
    }
    for(ll i=1;i<=n;i++)
    for(ll j=1;j<=n;j++)
    {
    u=(ll)a[i][j]-48;
        if(b[u]>ln) {ln=b[u];}
    }
    cout<<ln;
}

#include<bits/stdc++.h>

using namespace std;

long long a[100005], n, d1, d2, d3, d4;

int main()
{
    cin >> n;
    
    for( long long i = 1; i <= n; i++)
    
    cin >> a[i];
    
    for( long long i = 1; i <= n; i++)
    {
        
        if( a[i] == 4) d4++;
        else
            if( a[i] == 3) d3++;
            else 
                 if( a[i] == 2) d2++;
                 else d1++;    
    }
    if( d3 >= d1) {
        d4 += d3;
        d1 = 0;
    }
    else {
        d4 += d3;
        d1 = d1-d3;
    }
    d4 += (d2*2 + d1 + 3)/4;
    cout << d4;
}

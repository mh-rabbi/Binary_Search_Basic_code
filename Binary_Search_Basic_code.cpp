#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    sort(a,a+n);

    int x;
    cin>>x;

    int l=0;
    int r=n;
    int mid;

    while(r - l > 1)
    {
        mid = (l+r)/2;
        if(a[mid] <= x) l = mid;
        else r = mid;
    }

    if(a[l] == x) cout<<"YES FOUND\n";
    else cout<<"NOT FOUND\n";


    return 0;
}

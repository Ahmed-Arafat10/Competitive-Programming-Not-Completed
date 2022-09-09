//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/H
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void Pyramid(ll n,ll b,ll limit)
{
    if (n == limit) return;
    for(ll i =0; i<n; i++) printf(" ");
    for(ll i =0; i<b; i++) printf("*");
    if(n != (limit-1)) puts("");
    Pyramid(++n,b-2,limit);
}

int main()
{
    ll n;
    cin>>n;
    Pyramid(0,n+(n-1),n);
}
-----------------------------------------------
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll x;
void Pyramid(ll n)
{
    if (n == 0) return;
    for(ll i =0; i<x-n; i++) printf(" ");
    for(ll i =0; i<(n+(n-1)); i++) printf("*");
    if(n != 1) puts("");
    Pyramid(--n);
}

int main()
{
    cin>>x;
    Pyramid(x);
}

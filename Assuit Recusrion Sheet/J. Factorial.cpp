//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
static ll cnt = 0;
ll solve(ll n)
{
    if(n == 1) return 1;
    return 1LL * n * solve(n-1);
}

int main()
{
    ll n;
    scanf("%lld",&n);
    printf("%lld",solve(n));
}

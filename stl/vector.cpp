#include <iostream>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <unordered_set>
#include <cmath>
#include <numeric>
#include <iterator>
#include <set>
#include <unordered_map>
#include <map>
#include <queue>
#include <cstring>
#include <stdio.h>
#include <fstream>
#include <iomanip>
#include <functional>
#include <bitset>
#include <chrono>
#include <climits>
#include <assert.h>
#include <time.h>
using namespace std;
using namespace chrono;
typedef long long ll;
typedef double dbl;
void fastio()
{
    cin.tie(NULL);
    cout.tie(NULL);
}
#define rep(i, n) for (ll i = 0; i < n; i++)
#define mod 1000000007
#define f(i, a, b) for (ll i = a; i < b; i++)
#define fb(i, a, b) for (ll i = a; i > b; i--)
#define MOD1 998244353
#define inf 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) (int)(x.size())
ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
//when declaring a vector globally 10^7 is the limit
//when declaring a vector locally 10^5 is the limit
void print(vector<int> &a)
{
    for(auto it=a.begin();it!=a.end();it++){
        cout<<*it<<" ";

    }
}
void solve()
{
    vector<int> vec;
    int n;
    cin >> n;
    rep(i, n)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }
    //ascending order sort
    sort(vec.begin(), vec.end());
    print(vec);
    vec.insert(vec.begin()+3,-3);//inserts before the address
    vec.erase(vec.begin()+1);//removes element before that address
    // sort(vec.rbegin(), vec.rend());
    // vec.assign(3,5);
    vector<int>vec1(5);
    swap(vec,vec1);
    vec.clear();
    cout << endl;
    print(vec);
}
int main()
{
    fastio();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
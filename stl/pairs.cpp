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
void print(vector<pair<int, int> > &a)
{
    int n = a.size();
    rep(i, n)
    {
        cout <<a[i].ff<<" "<<a[i].ss<<endl;
    }
}
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
  
void solve()
{
    pair<int, string> p;
    pair<int, string> p1 = p;  //by refernce(copied)
    pair<int, string> &p2 = p; //by value
    p = mp(2, "ishna");        //adding element
    p1.first = 3;
    p2.second = "abc";
    p1.second = "abc";
    // cout<<p.first<<" "<<p.second<<endl;//accessing element
    // cout<<p1.first<<" "<<p1.second<<endl;//accessing element
    // cout<<p2.first<<" "<<p2.second<<endl;//accessing element
    vector<pair<int, int> > vec;
    int n;
    cin >> n;
    // pair<int,int>arr[n];

    rep(i, n)
    {
        int a, b;
        cin >> a >> b;
        vec.pb(mp(a, b));
    }
    // swap(arr[0],arr[2]);
    //sorting elements  by first in ascending order
    sort(vec.begin(), vec.end());//sorts by first 
    print(vec);
    sort(vec.rbegin(), vec.rend());//sorts by first 
    print(vec);
    sort(vec.begin(),vec.end(),sortbysec);
    print(vec);
    sort(vec.rbegin(),vec.rend(),sortbysec);
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
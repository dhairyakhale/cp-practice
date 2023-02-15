#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(), c.end()
#define mp(x, y) make_pair(x, y)
#define mem(a, val) memset(a, val, sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;

void func()
{
    int n;
    cin >> n;
    int x = 0, y = 0, z = 0, xi, yi, zi;

    for (int i = 0; i < n; i++)
    {
        cin >> xi >> yi >> zi;
        x += xi;
        y += yi;
        z += zi;
    }

    if (!x && !y && !z)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    int T = 1;
    // cin >> T;
    // cin.ignore(); must be there when using getline(cin, s)
    while (T--)
    {
        func();
    }
    return 0;
}

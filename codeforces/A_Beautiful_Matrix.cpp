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
    int r, c, x;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> x;
            if (x == 1)
                r = i, c = j;
        }
    }

    cout << (abs(2 - r) + abs(2 - c));
}

int main()
{
    std::ios::sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    // cin.ignore(); must be there when using getline(cin, s)
    while (T--)
    {
        func();
    }
    return 0;
}

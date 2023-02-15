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
    string s;
    cin >> s;

    int repcount = 0;
    if (s.size() > 2 && s[0] == s[s.size() - 1])
        repcount++;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
            repcount++;
        if (repcount > 2)
        {
            cout << "no" << endl;
            return;
        }
    }
    if (repcount == 1)
        cout << "no" << endl;
    else
        cout << "yes" << endl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    int T = 1;
    cin >> T;
    // cin.ignore(); must be there when using getline(cin, s)
    while (T--)
    {
        func();
    }
    return 0;
}

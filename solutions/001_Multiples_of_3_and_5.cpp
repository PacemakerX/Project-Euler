#include <bits/stdc++.h>

using namespace std;

void solve()
{

    long long int n;
    cin >> n;
    n--;
    long long int a = n / 3;
    long long int b = n / 5;
    long long int c = n / 15;

    long long int suma = (a == 0 ? 0 : (a * (6 + (a - 1) * 3)) >> 1);
    long long int sumb = (b == 0 ? 0 : (b * (10 + (b - 1) * 5)) >> 1);
    long long int sumc = (c == 0 ? 0 : (c * (30 + (c - 1) * 15)) >> 1);

    cout << (suma + sumb - sumc) << "\n";
}

int main()
{

    ios_base::sync_with_stdio();
    cin.tie();
    cout.tie();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

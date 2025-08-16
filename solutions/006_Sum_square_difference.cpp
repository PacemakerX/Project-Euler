#include <bits/stdc++.h>

using namespace std;

;
void solve()
{

    long long int n;
    cin >> n;
    long long int sumOfSquares = ((2 * n + 1) * (n + 1) * n) / 6;
    long long int sum = (n * (n + 1)) >> 1;

    cout << abs(sumOfSquares - (sum * sum)) << "\n";
}
int main()
{

    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--)
        solve();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;

        int ans = 0;

        while (n)
        {
            int res = n % 10;
            n = n / 10;
            ans += res;
        }

        cout <<ans<<endl;
    }
}
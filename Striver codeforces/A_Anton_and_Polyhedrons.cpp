#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int ans = 0;
    while (t--)
    {
        string s;
        cin >> s;

        if (s == "Tetrahedron")
        {
            ans += 4;
        }
        if (s == "Cube")
        {
            ans += 6;
        }
        if (s == "Octahedron")
        {
            ans += 8;
        }

        if (s == "Dodecahedron")
        {
            ans += 12;
        }
        if (s == "Icosahedron")
        {
            ans += 20;
        }
    }
    cout << ans;
}
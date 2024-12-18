#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;

    cin >> n >> q;
    vector<int> v(n + 1); // Input Part
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    // Prefix_Sum_Part ........
    vector<int> pre(n + 1);
    pre[1] = v[1];
    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }
    for (int i = 1; i <= n; i++)
    {
       cout<< pre[i] <<" ";
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int sum;
        if (l == 1) // jodi amier l ar index man 1 hoy tah hola akna tah hola pre[pre hoba]
        {
            sum = pre[r];
        }
        else 
        {
            sum = pre[r] - pre[l - 1]; // ata holo amier pre right + left man bar kora ....
        }

        cout << sum << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int v;
    cin >> v;
    int flag = 0;
//.................................................... After in Binary Seacrch code ..........
    int l = 0;
    int r = n - 1;
    while (l<=r)
    {
        int mid = (l + r) / 2; // mid bar kora
        if (a[mid] == v)
        {
            flag = 1;
        }
        else if (a[mid] > v) // ata holo amier value jodi mid thka choto hoy tah hola Right move korva
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1; // ata holo amier value jodi mid thka boro  hoy tah hola left  move korva
        }
    }

    //.................................................... END in Binary Seacrch code ..........

    //-------Before in Binary Search--------
    // for (int i = 0; i < n; i++)
    // {
    //     if(a[i]==v)
    //     {
    //         flag=1;
    //     }
    // }
    if (flag == 1)
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }

    return 0;
}
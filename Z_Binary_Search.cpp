#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    // vector<int>v(n);
    int a[n];
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    while(q--)
    {
        int x;
        cin>>x;

        int flag=0;

        int l=0;
        int r=n-1;

         while(l<=r)
         {
            int mid=(l+r)/2;
            if(a[mid]==x)
            {
                flag=1;
                break;
            }
                  //  3   2
            else if(a[mid]>x)
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
         }
        
        

        // for(int i=0; i<n; i++)
        // {
        //     if(v[i]==x)
        //     {
        //         flag=1;
        //     }
        // }
        if(flag==1)
        {
            cout<<"found"<<endl;
        }
        else
        {
            cout<<"not found"<<endl;
        }
    }
    return 0;
}
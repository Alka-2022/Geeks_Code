// Kth smallest element

#include <bits/stdc++.h>
using namespace std;

void main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++)
            cin>>arr[i];
        int k;
        cin>>k;

         priority_queue<int>qu;
         for(int i=0;i<k;i++)
         {
             qu.push(arr[i]);
             if(qu.size()>k)
                    qu.pop();

         }

         cout<<qu.top()<<endl;
    }
    return n;
    
}

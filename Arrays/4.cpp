//Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

// } Driver Code Ends


void sort012(int a[], int n)
{
    // coode here 
    map <int,int> mp;
    int i;
    for(i=0;i<n;i++)
    mp[a[i]]++;
    int k=0;
    for(i=0;i<mp[0];i++)
    {
        a[k]=0;
        k++;
    }
    for(i=0;i<mp[1];i++)
    {
        a[k]=1;
        k++;
    }
    for(i=0;i<mp[2];i++)
    {
        a[k]=2;
        k++;
    }
}
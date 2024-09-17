#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    // int n;
    // cin>>n;
    // vector<int> v(n);
    // for(int i=0; i<n; i++)
    // {
    //     cin>>v[i];
    // }
    // sort(v.begin(), v.end());
    // if(v[n-1]==n)
    // {
    //     cout<<n+1<<endl;
    //     return 0;
    // }
    // for(int i=0; i<n; i++)
    // {
    //     if(i+1!=v[i])
    //     {
    //         cout<<i+1<<endl;
    //         break;
    //     }
    // }
    // return 0;
    vector<int> v={1, 2, 3};
    vector<int> w={1, 2, 3};
    if(v==w)
    {
        cout<<true<<endl;
    }
    else
    cout<<false<<endl;
}
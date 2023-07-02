#include<bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        set<int>s;
        int a[3];
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        int c=0;
        for(auto d:s)
        {
            c++;
            if(c==2)
            {
                cout<<d<<endl;
            }
        }
    }
    return 0;
}

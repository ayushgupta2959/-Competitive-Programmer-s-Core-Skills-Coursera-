#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
#include <climits>
#include <deque>
#include <map>
#include <deque>
#include <iomanip>
#include <cmath>
#include <functional>
#include <set>
#include <list>
#define endl '\n'
#define FOR(i,a,n,c) for(int i=a;i<=n;i+=c)
using namespace std;
#define MOD 1000000007
#define ll long long
#define pb push_back
typedef pair<ll,ll> pll;
int main()
{
    /*
for reading from input.txt and writing on output.txt
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
*/
    ll n;
    while(cin>>n)
    {
        ll a[n+1]={0},b[n+1]={0};
        for(ll i=1;i<=n;i++)cin>>a[i];
        for(ll i=1;i<=n;i++)cin>>b[i];
        ll ans[n+1][n+1];
        memset(ans,0,sizeof(ans));
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=n;j++)
            {
                if(a[i]==b[j])
                    ans[i][j]=ans[i-1][j-1]+1;
                else
                    ans[i][j]=max(ans[i-1][j],ans[i][j-1]);
            }
        }
        cout<<ans[n][n]<<endl;
        vector<ll> ai,bi;
        ll res=ans[n][n];
        ll i=n,j=n;
        while(i>=1 && j>=1)
        {
            if(a[i]==b[j])
            {
                ai.push_back(i-1);
                bi.push_back(j-1);
                i--;j--;
            }
            else if(ans[i-1][j]<ans[i][j-1])
                j--;
            else
                i--;
        }
        reverse(ai.begin(),ai.end());
        reverse(bi.begin(),bi.end());
        for(auto i:ai)
            cout<<i<<" ";
        cout<<endl;
        for(auto i:bi)
            cout<<i<<" ";
        cout<<endl;
    }
}


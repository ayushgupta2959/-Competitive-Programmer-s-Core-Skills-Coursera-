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
    ll n,maxW;
    while(cin>>n>>maxW)
    {
        ll profit[n+1],weight[n+1];
        for(ll i=1;i<=n;i++)
            cin>>weight[i]>>profit[i];
        ll ans[n+1][maxW+1];
        memset(ans,0,sizeof(ans));
        vector<ll> fin;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=maxW;j++)
            {
                if(weight[i]<=j)
                    ans[i][j]=max(ans[i-1][j],profit[i]+ans[i-1][j-weight[i]]);
                else
                    ans[i][j]=ans[i-1][j];
            }
        }
//        cout<<ans[n][maxW]<<endl;
        ll res=ans[n][maxW];
        for(ll i=n;i>=1 && res>=0;i--)
        {
            if(res==ans[i-1][maxW])
                continue;
            else
            {
                fin.push_back(i);
                res-=profit[i];
                maxW-=weight[i];
            }
        }
        reverse(fin.begin(),fin.end());
        cout<<fin.size()<<endl;
        for(auto i:fin)
            cout<<i<<" ";
        cout<<endl;
    }
}


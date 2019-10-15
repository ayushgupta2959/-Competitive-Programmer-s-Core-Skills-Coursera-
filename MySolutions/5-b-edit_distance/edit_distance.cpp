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
    ll n,m;
    while(cin>>n>>m)
    {
        string s1,s2;cin>>s1>>s2;
        ll in,de,sub;cin>>in>>de>>sub;
        ll ans[n+1][m+1];
        for(ll i=0;i<=n;i++)
        {
            for(ll j=0;j<=m;j++)
            {
                if(i==0)
                    ans[i][j]=j*in;//inserting total j characters
                else if(j==0)
                    ans[i][j]=i*de;//removing total i characters
                else if(s1[i-1]==s2[j-1])
                    ans[i][j]=ans[i-1][j-1];
                else
                    ans[i][j]=min(in+ans[i][j-1],min(de+ans[i-1][j],sub+ans[i-1][j-1]));
            }
        }
        cout<<ans[n][m]<<endl;
    }
}

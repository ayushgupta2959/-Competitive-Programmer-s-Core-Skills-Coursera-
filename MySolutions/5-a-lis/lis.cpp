#include <iostream>
using namespace std;
int increasingSubs(int array[],int n)
{
    int dp[n+1];
    for(int i=1;i<=n;i++)
        dp[i]=1;
    int maxIN=1;
    for(int i=1;i<=n;i++)
    {
        int ans=0;
        for(int j=1;j<i;j++)
        {
            if(array[i]>array[j])
            {
                ans=max(ans,dp[j]);
            }
        }
        dp[i]+=ans;
        maxIN=max(maxIN,dp[i]);
    }
    return maxIN;
}
int main()
{
    int n;
    cin>>n;
    int array[n+1];
    for(int i=1;i<=n;i++)
        cin>>array[i];

    int ans=increasingSubs(array,n);
    cout<<ans<<endl;
}

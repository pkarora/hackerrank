#include <bits/stdc++.h>
using namespace std;
void solve()
{
        int n,k;
        cin>>n>>k;
        int count=0;
        int div=1;
        while(div>=1)
        {
                int j = div%n;
                if(j!=0)
                {
                        count++;
                }
                if(count==k)
                        break;
                div++;
        }
        cout<<div<<endl;


}
int main()

{
        int t = 1;

        cin>>t;

        while(t--)
        {
                solve();
        }

        return 0;
}

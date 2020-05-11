#include <bits/stdc++.h>
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
//#define int long long int

using namespace std;

void code()
{
        string s;
        cin>>s;
        int n, sum=0, k;
        cin>>k;
        n = s.size();
        for(int i=0; i<n; i++)
        {
                sum = sum + (s[i] - 48);

        }
        sum*=k;
        while(sum>=10)
        {
                string j = to_string(sum);
                int p = j.size(),summ=0;
                for(int i=0; i<p; i++)
                {
                        summ = summ + (j[i] - '0');
                }
                sum = summ;
        }
        cout<<sum;
}




signed main()

{
        FAST_IO;
        int t = 1;

        //cin>>t;

        while(t--)
        {
                code();
        }

        return 0;
}

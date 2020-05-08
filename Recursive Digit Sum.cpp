#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n,k;
        cin>>n;
        cin>>k;
        int sum =0,mod;
        while(n>0)
        {
                mod = n%10;
                sum+=mod;
                n = n/10;
                if(n<10)
                        break;
        }
        int se =(sum+n)*k;
        if(se<10)
                cout<<se;
        else if(se>10)
        {
                int gum=0, nod, final;
                while(se>0)
                {

                        nod = se%10;
                        gum+=nod;
                        se = se/10;
                        if(se+gum>10)
                        {
                                se = se+gum;
                        }
                        if(se+gum<10)
                        {
                                final = se+gum;
                                break;
                        }
                }
                cout<<final;
        }
        return 0;
}

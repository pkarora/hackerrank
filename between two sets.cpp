#include <bits/stdc++.h>
using namespace std;
int main(){
        int n,m;
        cin>>n>>m;
        int arn[n],arm[m];
        int a = INT_MIN;
        int b = INT_MAX;
        for(int i=0; i<n; i++)
        {
                cin>>arn[i];
                a = max(a,arn[i]);
        }
        for(int i=0; i<m; i++)
        {
                cin>>arm[i];
                b = min(b,arm[i]);
        }
        int summ=0,sumn=0, modn, modm;
        int count=0;
        while(a<=b)
        {

                for(int i=0; i<n; i++)
                {
                        modn = a%arn[i];
                        sumn+= modn;
                }
                for(int i=0; i<m; i++)
                {
                        modm = arm[i]%a;
                        summ+=modm;
                }
                if(summ==0 && sumn==0)
                        count++;
                a++;
        }
        cout<<count;
        return 0;
}

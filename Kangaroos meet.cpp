#include <bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int i=1;
        while(i<=10000)
        {
                a+=b;
                c+=d;
                if(a==c)
                {
                        cout<<"YES";
                }else{ cout<<"NO";}
                i++;
        }
        return 0;
}

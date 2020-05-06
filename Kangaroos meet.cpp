#include <bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        int a,b,c,d;
        cin>>a;
        cin>>b;
        cin>>c;
        cin>>d;
        bool check = false;
        int i=1;
        while(i<=10000)
        {
                if(a==c)
                {
                        check = true;
                        break;
                }
                a+=b;
                c+=d;
                i++;
        }
        if(check)
        {
                cout<<"YES";
        }
        else {cout<<"NO";}
        return 0;
}

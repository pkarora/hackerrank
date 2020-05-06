de <bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        int a,b,c,d;
        cin>>a;
        cin>>b;
        cin>>c;
        cin>>d;
        int i=1;
        while(i<=10000)
        {
                a+=b;
                c+=d;
                if(a==c)
                {
                        bool check = true;
                        break;
                }
                i++;
        }
        if(check)
        {
                cout<<"YES";
        }
        else {cout<<"NO";}
        return 0;
}

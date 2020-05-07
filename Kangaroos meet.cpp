#include <bits/stdc++.h>
using namespace std;
int main(){
        int a,b,c,d,x;
        cin>>a>>b>>c>>d;
        x = (a-c)/(d-b);
        if(abs(d-b)>0 && x%1==0)
        {
                cout<<"YES";
        }
        else if(d-b==0 && a-c==0)
        {
                cout<<"YES";
        }
        else{ cout<<"NO"; }
}

/*int main(){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
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
   }*/

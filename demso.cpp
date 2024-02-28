#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fu(i,a,b) for(int i=a; i<=b; i++)
#define fd(i,a,b) for(int i=a; i>=b; i--)
#define task "demso"
const int MAXN=1e9;

int logNum(int a){
    fd(i,8,1) if (a/pow(10,i-1)>=10) return i;
}


signed main()
{
    freopen(task".inp","r",stdin);
    freopen(task".out","w",stdout);
    int n; cin >> n;
    int res=n,tmp;
    if (n<10) cout << n;
    else{
        int num =logNum(n);
        fd(i,num,0){
            tmp=(n-pow(10,i)+1);
            res=res+tmp*i; n=n-tmp;
        }
        cout << res;
    }
    return 0;
}

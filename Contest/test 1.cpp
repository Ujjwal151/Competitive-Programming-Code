// CF
#include<bits/stdc++.h>
using namespace std;

solve()
{
    int temp = 105; //cin>>temp;

    int n = temp;
    int ans = 0;
    while(n>10){

        int x = (int)log(n);
        ans = ans + 9*x;
        int myp = pow(10,x);
        n = n% myp;

    }

    if(temp%10 == (temp/10)%10);
    ans++;

    cout<<ans<<endl;
}


int main()
{
    int t = 1;// cin>>t;
    while(t--){
        solve();
    }

    return 0;
}


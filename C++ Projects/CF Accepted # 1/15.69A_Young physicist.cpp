//CF : 69A Young Physicist
#include<iostream>
using namespace std;
int main(){
    short int n;
    cin>>n;
   short int x,y,z;
    short int xs=0,ys=0,zs=0;
    while(n--){
    
    cin>>x>>y>>z;
        xs += x; 
        ys += y;
        zs += z;
    
}
    if(xs == 0 && ys == 0 && zs == 0)
    cout<<"YES";
    else cout<<"NO";
 
    return 0;
}
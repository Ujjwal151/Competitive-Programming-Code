#include<iostream>
#include<pair>
using namespace std;
print(pair<int, string> p){
    cout<<p.first<<" "<<p.second<<"\n";
}
int main(){
    pair<int, string> p;

    p = make_pair(10, "ujjwal");
}

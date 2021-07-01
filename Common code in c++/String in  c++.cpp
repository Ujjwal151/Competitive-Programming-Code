#include<bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    string name, full, cpy, first = "hello " ;
    getline(cin,name);
    full = first + " "+name;
    //full = first.append(name);
    cpy = full;
    cout<<full<<endl;
    cout<<cpy<<endl;
}

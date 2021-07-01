//#include<iostream>
//#include<vector>
//#include<bits/stdc++.h>
//using namespace std;
//
//
//solve(){
//
//    int n,m;
//    cin>>n>>m;
//
//   vector < vector<int> > v(n);
//
//
//    for(int i = 0; i<n; i++){
//         int x;
//        vector<int> temp(m);
//        for(int j = 0; j<m; j++){
//            cin>>temp[j];
//        }
//
//        sort(temp.begin(),temp.end());
//       if(m%2 == 0){
//             if(i == 0){
//
//            }
//            else if(i%2 != 0){
//                swap(temp[0], temp[i]);
//            }
//            else {
//                swap(temp[0], temp[m-i]);
//            }
//       }
//       else{
//            if(i ==0){
//
//            }
//            else if(i%2 == 1){
//                 swap(temp[0], temp[m-i]);
//            }
//            else{
//                swap(temp[0], temp[i]);
//            }
//       }
//
//        v[i] = temp;
//    }
//
//    cout<<endl;
//    for(int i = 0; i<n; i++){
//        for(int j = 0; j<m; j++){
//            cout<<v[i][j]<<" ";
//        }
//        cout<<"\n";
//    }
//}
//
//int main()
//{
//    int t; cin>>t;
//
//    while(t--){
//        solve();
//        cout<<endl;
//    }
//
//    return 0;
//}

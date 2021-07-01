//// scanf, cin vs push_back
//#include<iostream>
//#include<vector>
//using namespace std;
//int main(){
//
//    vector<int> v1(5);
//    for(int i = 0; i<v1.size(); i++){
//       //scanf("%d",&v[i]);
//        cin>>v1[i];
//        }
//        // size must be setted first
//        // we should primarily set the size, we can use size()
//        //in for loop. we can either use scanf or cin.
//    for(int i = 0; i<v1.size(); i++){
//        cout<<v1[i]<<" ";
//    } cout<<endl;
//
//
//    vector <int> v2(10, 2);
//    int x;
//    for(int i = 0; i< 5; i++){
//        cin>>x;
//        v2.push_back(x);
//        }
////        size must not be setted first. In case we set size
////        it will take input after the size. In c
////        we need another variable x. We can not
////        use size() in for loop. We can only use push back.
//    for(int i = 0; i<v2.size(); i++){
//        cout<<v2[i]<<" ";
//    } cout<<endl;
//}

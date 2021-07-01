//#include <iostream>
//#include<vector>
//
//using namespace std;
//
//const int x = 10;
//vector<int>:: iterator it;
//vector<int> v;
//
//printvector(){
//    cout<<"print vector with iterator : ";
//    for(it = v.begin(); it != v.end(); it++){
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//}
//
//int main()
//{
//    int y;
//
//    for(int i = 0; i<x; i++){
//       y = rand() % 100;
//       v.push_back(y);
//    }
//    printvector();
//
//    v.pop_back();
//    printvector();
//
//    v.pop_back();
//    printvector();
//
//    v.pop_back();
//    cout<<"Popped item = resently deleted = "<< *v.end()<<endl;
//    cout<<"last item = "<< *(v.end()-1)<<endl;
//    cout<<"3rd item next to last item : "<< *(v.end()+2)<<endl;
//    printvector();
//    cout<<endl;
//
//
//    v.insert(v.begin(),10);
//    printvector();
//
//    v.insert(v.end(),20);
//    printvector();
//    v.insert(v.end()-2,20);
//    printvector();
//
//    v.insert(v.begin()+2, 100);
//    printvector();
//
//    return 0;
//}

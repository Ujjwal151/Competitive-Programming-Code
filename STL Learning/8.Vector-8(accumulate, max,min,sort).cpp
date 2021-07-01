////accumulate, *min, *max, sort
//#include <iostream>
//#include<vector>
//#include<algorithm> // for using *min/max element (v.begin(),v.end())
//#include<numeric> // for using accumulate(v.begin(),v.end(),0) function
//using namespace std;
//
//const int x = 10;
//vector<int>:: iterator it;
//vector<int> v;
//
//printvector(){
//    cout<<"vector elements : ";
//    for(it = v.begin(); it != v.end(); it++){
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//}
//
//int main()
//{
//    for(int i = 0; i<10; i++){
//       v.push_back(rand()%100);
//       //v.push_back(i);
//    }
//    cout<<"Initial ";
//    printvector();
//
//    cout<<"Sum of all elements : "<<accumulate(v.begin(),v.end(),5)<<endl;
//    // sum of = + + + +.....+ + 5 = 50
//
//    //Full range indecates [ v.begin(), v.end())
//    cout<<"max element : "<<*max_element(v.begin(),v.end())<<endl;
//    cout<<"max element : "<<*max_element(&v[0],&v[v.size()])<<endl;
//
//    cout<<"min element : "<<*min_element(v.begin(),v.end())<<endl;
//    cout<<"min element : "<<*min_element(&v[0],&v[v.size()])<<endl<<endl;
//                // v[0] to before v[10] that means v[0] to v[9]
//
//    // this will find the max or min element from a given range.
//    cout<<"Max between [1,3) : "<<*max_element(v.begin()+1,v.begin()+3)<<endl;
//    cout<<"Max between [1,3) : "<<*max_element(&v[1],&v[3])<<endl;
//
//    cout<<"Min between [1,3) : "<<*min_element(v.begin()+1,v.begin()+3)<<endl;
//    cout<<"Min between [1,3) : "<<*min_element(&v[1],&v[3])<<endl;
//            // v[1] to before v[3] that means v[1] to v[2]
//
//    sort(&v[0],&v[3]); // x = v[0] && x<v[3]
//    cout<<"\nAfter partial sort ";
//    printvector();
//
//    sort(v.begin()+1,v.end()-2);
//    cout<<"\nAfter partial sort ";
//    printvector();
//
//
//    sort(v.begin(),v.end()); // Fully sorted vector
//    cout<<"\nAfter full sort ";
//    printvector();
//
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    map<int, double> m;
//    int n = 10;  //cin>>n;
//
//    for(int i = 0; i<n ; i++){
//        m[i+1] = i+10;
//    }
//    m[25] = 30;   //If we don't initialize i.e, m[25] then for int,float or double
//    //it will be 0(zero). for string it will be ""(double quote.But not null).
//    //In case char it will be initilized with '\0' (null);
//    m[12] = 120; // simply initialise to key 12 to value 120
//    m[-5] = 100;  // Replace korte pare but value na dile hobe na. jmn m[2] dile
//    //replae hobe na. tobe 2 key na thakle 2 key add korbe and 0 initialize korbe.
//    m.insert({0,20.6}); //At a line 1 tai item insert korte pare.
//    //replace korte pare na. key er surur age ba seser pore data insert korte pare.
//
//    //m.erase() can take the key or take the iterator of the key and
//    //delete the key and its value.
//    m.erase(3); // that means the key 1 and its value is deleted.
//    auto p = m.find(4); // this will find the key and returns iterator.
//    //If fails then return the address of m.end()
//    m.erase(p);  // it will erase the key and value.
//
//    map<int, double> ::iterator it = m.find(5);
//    m.erase(it);
//
////    p = m.find(5);
////    m.erase(p);  // -10 is not present so it will print only first and last item.
////    it = m.find(-20);
////    m.erase(it); //-20 is not present so it will print only first and last item.
////****Both are in convenient since they give unexpected things. So let's check
////    they are present or not. If they are found then delete the item.
//    p = m.find(-20); // Although -20 isn't present still the program works fine!
//    if( p != m.end()){
//        m.erase(p);
//    }
////***But in case we direct pass the key rather than iterator m.erase() works ok!
//    m.erase(-20); // though -20 is not present the output is okay.
//
//    cout<< "map size = "<< m.size()<<endl;
//    cout<<"m[15]="<<m[15]<<"."<<endl; // here key = 0, value = 15
//    m[100],m[101]; // They also assigned. keys are 100,101. values 0,0.
//
//    for(auto pr : m){ // & for direct access. & dile first e copy hobe.
//        cout<< pr.first<<" "<<pr.second<<"."<<endl;  //it works!
//    }
//    cout<< "map size = "<< m.size()<<endl;
////    auto p = m.find("a"); // & deya jabe na;
////    cout<< p->first<<" "<< p->second<<"."<<endl;     //it works!
//
//    m.clear(); // Now all are deleted.It becomes as fresh as declaration time.
//    cout<<"After clear m.size = "<<m.size();
//
//    for(auto &pr : m){ // & for direct access. & dile first e copy hobe.
//        cout<< pr.first<<" "<<pr.second<<"."<<endl;  //it works!
//    }
//
//
////****Use of iterator for print:
////    map<string, double> ::iterator it;
////    for(it = m.begin(); it != m.end(); it++){
////       cout<< (*it).first<<" "<<(*it).second<<endl;  //it works!
////    }
////    map<string, double> ::iterator it;
////    for(it = m.begin(); it != m.end(); it++){
////        cout<< it->first<<" "<<it->second<<"."<<endl;  //it works!
////    }
//
//
////****Use of iterator for find:
////    map<string, double> ::iterator it;
////    it = m.find("a");
////    cout<< (*it).first<<" "<< (*it).second<<"."<<endl; //it works!
//
////    map<string, double> ::iterator p;
////    p = m.find("a");
////    cout<< p->first<<" "<< p->second<<"."<<endl;       //it works!
//
//
////****Use of auto for print:
////    for(auto &pr : m) // & for direct access. & dile first e copy hobe.
////        cout<< pr.first<<" "<<pr.second<<"."<<endl;  //it works!
//
////****Use of auto for find:
////      auto p = m.find(4);
//
//}

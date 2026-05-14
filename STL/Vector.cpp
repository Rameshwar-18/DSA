#include<iostream>
#include<vector>
using namespace std;

int main (){

    vector<int> v;
    cout<<"capacity->"<<v.capacity()<<endl;

    v.push_back(1); //to push an element 
    cout<<"capacity->"<<v.capacity()<<endl;

     v.push_back(2); //to push an element 
    cout<<"capacity->"<<v.capacity()<<endl;

     cout<<"front"<<v.front()<<endl;
     cout<<"back"<<v.back()<<endl;

    cout<<"Element at 2nd index"<<v.at(1)<<endl;



}
 
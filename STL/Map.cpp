#include<iostream>
#include<map>
using namespace std;

int main (){

    map<int,string>m;

    m[1] = "Rameshwar";
    m[7] = "Swami";
    m[3] = "Baban";

    for(auto i:m){
        cout <<i.first<< " "<<i.second <<endl;
    }

    cout << "Finding 3 -> "<<m.count(3)<<endl;
}
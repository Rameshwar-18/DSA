#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    int a = 3;
    int b = 5;

    cout << "max -> "<< max(a,b);
    cout << endl;

    cout << "min -> " << min(a,b);
    cout << endl;

    swap(a,b);
    cout<< "a-> " <<a << endl;

    string abcd = "abcd";
    reverse(abcd.begin(),abcd.end());
    cout << "string -> "<< abcd <<endl;
}
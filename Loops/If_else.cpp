#include<iostream>
using namespace std;

int main (){

    int a;
    cout<<"enter a number :"<< endl;
    cin>>a;

    if (a>0){
        cout<<" A is a positive number"<<endl;
    }
    else if(a<0){
        cout<<"A is negative number"<<endl;
    }
    else {
        cout<<"A is equal to zero"<<endl;
    }
}
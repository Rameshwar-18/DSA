#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 2;

    if(n%i == 0){
        cout << "its not a prime number " <<endl;
    }
    else{
        cout << "its a prime number "<< endl;
    }
}
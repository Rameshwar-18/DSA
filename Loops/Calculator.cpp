#include<iostream>
using namespace std;

int main (){

    int x;
    cin >> x;

    char op;
    cin>> op;

    int y;
    cin >>y;

   

    if (op == '+') {
        cout << "addition is :"<< x + y << endl;
    }
   else if(op == '-') {
        cout << "sub is :" << x - y << endl;
   }
   else if(op == '*') {
        cout << "mul is :" << x * y << endl;
   }
   else if(op == '/') {
        cout << "Div is :" << x / y << endl;
   }
    else{
     cout << "invalid operation" << endl;
    }

}
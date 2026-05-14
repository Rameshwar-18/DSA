#include<iostream>
#include<stack>
using namespace std;

int main (){
    stack<string> s;

    s.push("Ram");
    s.push("soam");
    s.push("Rushi");

    cout<<"Top element ->"<<s.top()<<endl;

    s.pop();
    cout<<"Top element->"<<s.top()<<endl;

    cout<<"size of stack "<<s.size()<<endl;
}
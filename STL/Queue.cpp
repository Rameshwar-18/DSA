#include<iostream>
#include<queue>
using namespace std;

int main (){
    queue<string> q;

    q.push("Ram");
    q.push("soam");
    q.push("Rushi");

    cout<<"size Before pop "<<q.size()<<endl;

    cout<<"First element "<<q.front()<<endl;
    q.pop();
    cout<<"First element "<<q.front()<<endl;

    cout<<"size after pop "<<q.size()<<endl;
    
}
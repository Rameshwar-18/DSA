#include<iostream>
#include<stack>
using namespace std;

 /* int main () {

    //creation of stack
    stack<int> s;

    //push operations 
    s.push(3);
    s.push(4);

    //pop operation 
    s.pop();

    cout<<"Top element is :"<< s.top() << endl;

    if(s.empty()){
        cout<<"stack is empty"<< endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }

    return 0;

} */

class mystack {
    //properties 
    public:
    int *arr;
    int top;
    int size;

    //behaviour
    mystack (int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }
    
    void push (int element){
        if (size - top > 1 ){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"stack is Overflow" << endl;
        }
    }

    void pop(){
        if (top >=0){
            top --;
        }
        else{
            cout << "stack is Underflow" <<endl;
        }
    }

    int peak() {
        if (top >=0)
          return arr[top];
    else
     {
        cout<<"stack is Empty"<<endl;
        return -1;
     }

    }

    bool isEmpty() {
        if (top == -1){
            return true;
        }
        else{
            return false;
        }
    }

};


int main(){


    mystack st(5); 

    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.peak() << endl;

    st.pop();
    cout << st.peak() << endl;
    
    return 0;
}
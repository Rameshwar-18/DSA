#include<iostream>
using namespace std;


void printArray ( int arr[], int size){

    cout << "Print the array " << endl;

    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout<< "printing done" << endl ;
}

int main (){
    int number [15] = { 1, 2 , 3 };
    printArray (number, 15);
}


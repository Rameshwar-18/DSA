#include<iostream>
#include <climits>
using namespace std;

int getMax(int num[], int n){

    int max = INT_MIN;
    for (int i=0; i<n; i++){
        if (num[i] > max){
              max = num[i];
        }
    }
    //return max value
    return max;
}

int getMin(int num[], int n){

    int min = INT_MAX;
    for (int i=0; i<n; i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    //return min value
    return min;
}


int main () {
    int size;
    cin >> size;

    int num [100];

    //tacking input in an array
    for (int i=0; i<size; i++){
        cin >> num[i];
    }

    cout << "maximum value is " << getMax(num , size) << endl ;
    cout << "minimum value is " << getMin(num , size) << endl ;

}
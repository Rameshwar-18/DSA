#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {

    //for round 1 to n-1
    for(int i = 1; i<n; i++){

        for(int j=0; j<n-i; j++){

            //process element till n-1th index
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main () {

   int arr[5] = {2,3,5,6,4};

    bubbleSort(arr, 5);
    
    cout << "Sorted array: ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

}
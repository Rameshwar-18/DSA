#include<iostream>
using namespace std;


void insertionSort(int arr[], int n){

    for(int i=1; i<n; i++){
        int temp = arr[i];

        int j=i-1;
        for(; j>=0; j--){
            if(arr[j] > temp){
                //shift
                arr[j+1] = arr[j];
            }
            else {
                //stop it
                break;
            }
        }
        arr[j+1] = temp;
    }

}


int main () {

   int arr[5] = {2,3,5,6,4};

    insertionSort(arr, 5);
    
    cout << "Sorted array: ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

}


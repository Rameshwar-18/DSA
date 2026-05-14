#include<iostream>
using namespace std;

int binarySearch ( int arr[], int size, int key){

    int start = 0;
    int end = size-1;

    int mid = (start + end)/2;

    while(start <= end) {
       if(arr[mid] == key){
            return mid;
        }

        //go to right part
        if (key > arr[mid]){
             start = mid + 1;
        }
        else  { 
            end = mid-1;
        }
        mid = (start+end)/2;
    } 
    return -1; 
}


int main() {

    int even[6] = {2,3,5,6,7,8};
    int odd[5] = {10,12,14,18,19};

    int evenIndex = binarySearch(even, 6, 6);
   cout << "Index of 6 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 14);
    cout << "Index of 14 is " << oddIndex << endl;

    return 0 ;

}
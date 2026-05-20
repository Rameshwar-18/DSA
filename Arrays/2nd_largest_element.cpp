class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = arr[0];
        int second_largest = INT_MIN;
        
        for (int i=1; i<arr.size();i++){
            if(arr[i]>largest){
               second_largest = largest;
                largest = arr[i];
            }
            else if(arr[i] > second_largest && arr[i] != largest){
                second_largest = arr[i];
            }
          }
          if (second_largest == INT_MIN)
          return -1;
          return second_largest;
      }
}; 
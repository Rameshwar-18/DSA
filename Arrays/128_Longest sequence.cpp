/* 128 longest-consecutive-sequence
given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
You must write an algorithm that runs in O(n) time. */

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size() == 0){
            return 0;
        }

        int n = nums.size();
        int count = 1;
        int maxcount = 1;

        sort(nums.begin(), nums.end());

        for(int i=0; i<n-1; i++){
            if(nums[i+1] - nums[i] == 1){
                count ++;
            }
            else if (nums[i+1] == nums[i]) {
               continue ;
            }
            else{
                count = 1;
            }
            maxcount = max(count, maxcount);
        }
        return maxcount ;
    }
};
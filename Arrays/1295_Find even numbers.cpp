/* 1295 find-numbers-with-even-number-of-digits 
Given an array nums of integers, return how many of them contain an even number of digits. */


class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int count = 0;

        for(int i=0; i< nums.size(); i++){
            if ((nums[i] > 9 && nums[i] <= 99 ) || (nums[i] > 999 && nums[i] <= 9999) || (nums[i] > 99999 && nums[i] <= 999999)) {
                count ++;
            }
        }
        return count;
    }
};
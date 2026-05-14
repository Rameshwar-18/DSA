class Solution {
  public:
    int findSum(int n) {
        // code here
        if (n == 0)
        return 0;
        
        return n + findSum(n - 1);
    }
};


// Factorial of a given number 
class Solution {
  public:
    int factorial(int n) {
        // code here
        if(n == 0) 
        return 1; //Return 1 because of 0 * 0 = 1 
        
        return n * factorial(n-1);
    }
};
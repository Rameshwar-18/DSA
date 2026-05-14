class Solution {
  public:
    void printTillN(int n) {
        if (n == 0) return;

        printTillN(n - 1); 
        cout << n << " ";   
    }
};


//Print n to 1 
class Solution {
  public:
    void printNos(int N) {
        // code here
        if(N == 0)return;
        
        cout << N << " "; 
        printNos(N - 1 );
        
    }
};
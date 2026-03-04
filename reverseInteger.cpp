#include<iostream>
#include<climits>
using namespace std;

    int reverse(int x) {
        int bhanda = 0;
        int ans = 0;

        while (x != 0) {
            ans = x % 10;

            if (INT_MAX / 10 < bhanda) {
                return 0;
            }
            if (INT_MIN / 10 > bhanda) {
                return 0;
            }

            bhanda = bhanda * 10 + ans;
            x = x / 10;
        }

        return bhanda;
    }

int main() {

    int x = 1232222;

    cout << "input : " << x << endl;
    cout << "output : " << reverse(x) << endl;

    return 0;
}
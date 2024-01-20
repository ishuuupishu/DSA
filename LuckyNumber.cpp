#include <iostream>
using namespace std;

bool isNearlyLucky(long long n) {
    int count = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7) {
            count++;
        }
        n /= 10;
    }
    return count == 4 || count == 7;
}

int main() {
    long long n;
    cin >> n;

    if (isNearlyLucky(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int eulerTotient(int n) {
    int result = n;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            result -= result / i;
        }
    }
    if (n > 1) {
        result -= result / n;
    }
    return result;
}

int main() {
    int t;
   cin >> t;

    while (t--) {
        int a, m;
        cin >> a >> m;

        int commonGCD = gcd(a, m);
        int result = eulerTotient(m / commonGCD);

      cout << result << endl;
    }

    return 0;
}

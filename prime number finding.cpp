#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}


int countHexPrimes(int N) {
    int count = 0;
    for (int i = 2; i <= N; ++i) {
        if (isPrime(i) && isPrime(i + 6)) {
            count++;
        }
    }
    return count;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int hexPrimeCount = countHexPrimes(N);

        cout << hexPrimeCount << endl;
    }

    return 0;
}

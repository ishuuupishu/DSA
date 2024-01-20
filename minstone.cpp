#include <iostream>
using namespace std;

int minStonesToRemove(int n, string s) {
    int count = 0;
    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i - 1]) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int result = minStonesToRemove(n, s);
    cout << result << endl;

    return 0;
}


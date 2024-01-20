#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int count = 0;
    int advancers = 0;

    for (int i = 0; i < n; ++i) {
        int score;
        cin >> score;

        if (score > 0 && (i < k - 1 || score >= count)) {
            advancers++;
            count = score;
        }
    }

    cout << advancers << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;


    long long flagstones_width = (n + a - 1) / a;
    long long flagstones_length = (m + a - 1) / a;


    long long total_flagstones = flagstones_width * flagstones_length;

    cout << total_flagstones << endl;

    return 0;
}


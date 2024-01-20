#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int k;
    int count=0;

    for (int i = 0; i < N; i++) {
        if (i % k == 0) {
            count++;
        }
    }

    cout<<count<<endl;
}

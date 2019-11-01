#include <iostream>
#include <cmath>

using namespace std;

const int N = 1000000;

int divider (int i) {
    int sum = 1;
    int p = 2;
    while(p <= sqrt(i)) {
        if(i % p == 0) {
            sum += p;
            if(i/p != p) sum += i/p;
        }
        p++;
    }
    return sum;
}

int main() {
    int sum;
    for(int i = 1; i < N; i++) {
        sum = divider(i);
        if(sum > i && sum < N && divider(sum) == i) cout << i << " " << sum << endl;
    }

    return 0;
}
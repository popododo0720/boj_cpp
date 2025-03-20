#include <iostream>

#define combine(N) N*(N-1)

using namespace std;

int main() {
    int N;
    cin >> N;

    cout << combine(N);
}
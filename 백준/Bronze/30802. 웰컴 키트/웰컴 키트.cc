#include <iostream>

using namespace std;

int main() {
    int N, T, P, result = 0;
    int size[6] = {0};
    cin >> N;

    for(int i = 0 ; i < 6 ; i++) {
        cin >> size[i];
    }

    cin >> T >> P;

    for(int i = 0 ; i < 6 ; i++) {
        result += size[i]/T + (size[i]%T > 0);
    }

    cout << result << "\n" << N/P << " " << N%P;
}
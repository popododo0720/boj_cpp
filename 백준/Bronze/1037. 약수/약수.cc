#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, tmp = 0, max = 0, min = 1000001;
	cin >> n;

	for(int i = 0 ; i < n ; i++) {
		cin >> tmp;
		if(tmp < min) {
			min = tmp;
		}
		if(tmp > max) {
			max = tmp;
		}
	}

	cout << min*max;
}

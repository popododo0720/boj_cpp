#include <iostream>

using namespace std;



int main() {
    ios::sync_with_stdio(false);
	cin.tie(NULL);
    int num[100001];
    int val[2000001];
    int n, x, tmp, result = 0;

    cin >> n;
    for(int i=0; i<n; i++) {
		cin >> tmp;
		num[i]=tmp;
		val[tmp] = 1;
    }
    cin >> x;

    for(int i=0; i<n; i++) {
        if(x-num[i]>=0 && x-num[i]>num[i] && val[x-num[i]]!=0) result++;
    }

    cout << result;
}
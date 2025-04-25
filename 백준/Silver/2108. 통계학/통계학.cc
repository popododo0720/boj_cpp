#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

std::vector<int> inputs;
int count[8001] = {0};

int rounded(double n) {
    if(n < 0) {
        return (int)(n - 0.5);
    } else {
        return (int)(n + 0.5);
    }
}

int getMiddle() {
    int middle_index = inputs.size() / 2;
    return inputs[middle_index];
}

int getMostFreq() {
    int max_frequency = 0;
    int flag = 0;
    int most_freq_index = 0;
    int second_index = 0;
    for(int i = 0 ; i < 8001 ; i++) {
        if(count[i] > max_frequency) {
            max_frequency = count[i];
            most_freq_index = i;
            flag = 0;
        } else if(count[i] == max_frequency && flag == 0) {
            flag = 1;
            second_index = i;
        }
    }

    if(flag == 1) {
        return second_index - 4000;
    } else {
        return most_freq_index - 4000;
    }    
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, tmp, min_val = 4001, max_val = -4001;
    double sum = 0;
    std::cin >> n;
    for(int i = 0 ; i < n ; i++) {
        std::cin >> tmp;
        inputs.push_back(tmp);
        count[tmp+4000]++;
        sum+=tmp;
        min_val = std::min(min_val, tmp);
        max_val = std::max(max_val, tmp);
    }

    std::sort(inputs.begin(), inputs.end());
    std::cout << rounded(sum/n) << "\n";
    std::cout << getMiddle() << "\n";
    std::cout << getMostFreq() << "\n";
    std::cout << max_val - min_val << "\n";

    return 0;
}

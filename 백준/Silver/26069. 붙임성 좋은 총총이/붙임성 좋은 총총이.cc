#include <iostream>
#include <unordered_set>

int main() {
    int n;
    std::string a, b;
    std::cin >> n;

    std::unordered_set<std::string> dancing;
    dancing.insert("ChongChong");
    for(int i = 0 ; i < n ; i++) {
        std::cin >> a >> b;
        if(dancing.find(a) != dancing.end() 
            || dancing.find(b) != dancing.end()) {
            dancing.insert(a);
            dancing.insert(b);
        }
    }

    std::cout << dancing.size() << std::endl;
    return 0;
}

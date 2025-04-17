#include <iostream>

int main() {
    std::string name, grade;
    double sum = 0, credit, now;
    int cnt = 0;

    for(int i = 0 ; i < 20 ; i++) {
        std::cin >> name >> credit >> grade;
        if(grade == "P") {
            continue;
        } 
        
        cnt += credit;

        if(grade =="F") {
            continue;
        } 

        if(grade[0] == 'A') {
            now = 4;
        } else if(grade[0] == 'B') {
            now = 3;
        } else if(grade[0] == 'C') {
            now = 2;
        } else{
            now = 1;
        }

        if(grade[1] == '+') {
            now += 0.5;
        }

        sum += (now * credit);
    }

    std::cout << sum/cnt;

    return 0;
}

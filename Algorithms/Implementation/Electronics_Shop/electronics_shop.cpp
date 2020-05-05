// Electronics Shop - Solution

#include <iostream>
#include <vector>

int getMoneySpent(std::vector<int> keyboards, std::vector<int> drives, int b) {
    int max{-1};
    for (int i{}; i < keyboards.size(); i++) {
        for (int j{}; j < drives.size(); j++) {
            int sum{keyboards[i] + drives[j]};
            if (sum <= b && sum > max) 
                max = sum;
        }
    }
    return max;
}

int main() {
    int b, n, m;
    std::cin >> b >> n >> m;
    std::vector<int> keyboards(n);
    for (int i{}; i < keyboards.size(); i++) {
        std::cin >> keyboards[i];
    }
    std::vector<int> drives(m);
    for (int j{}; j < drives.size(); j++) {
        std::cin >> drives[j];
    }
    int result = getMoneySpent(keyboards, drives, b);
    std::cout << result << std::endl;

    return 0;
}
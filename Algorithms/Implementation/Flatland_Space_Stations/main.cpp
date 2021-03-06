// Flatland Space Stations - Solution

#include <iostream>
#include <vector>
#include <algorithm>

int flatlandSpaceStations(const int n, const std::vector<int> &c) {
    int max{};
    for (int i{}; i < n; i++) {
        int temp{n};
        for (int j{}; j < c.size(); j++) {
            const int diff{abs(c[j]-i)}; 
            temp = std::min(temp, diff);
        }
        max = std::max(temp, max);
    }
    return max;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> c(m);
    for (int i{}; i < c.size(); i++) 
        std::cin >> c[i];
    const int result = flatlandSpaceStations(n, c);
    std::cout << result;

    return 0;
}
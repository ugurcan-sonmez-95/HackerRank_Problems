// Kangaroo - Solution

#include <iostream>

std::string kangaroo(const int x1, const int v1, const int x2, const int v2) {
    if (v1 > v2) {
        if ((x1-x2) % (v2-v1) == 0) 
            return "YES";
    }
    return "NO";
}

int main() {
    int x1, v1, x2, v2;
    std::cin >> x1 >> v1 >> x2 >> v2;
    const std::string result = kangaroo(x1, v1, x2, v2);
    std::cout << result;

    return 0;
}
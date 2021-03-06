// Intro to Tutorial Challenges - Solution

#include <iostream>

void introTutorial(const int V, const int n, const int arr[]) {
    for (int i{}; i < n; i++) {
        if (arr[i] == V) {
            std::cout << i; 
            break;
        }
    } 
}

int main() {
    int V, n;
    std::cin >> V >> n;
    int arr[n];
    for (int i{}; i < n; i++)
        std::cin >> arr[i];
    introTutorial(V, n, arr);

    return 0;
}
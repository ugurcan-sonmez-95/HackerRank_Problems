// Grading Students - Solution

#include <iostream> 
#include <vector>

std::vector<int> gradingStudents(std::vector<int> grades) {
    std::vector<int> new_grades;
    for (auto grade: grades)
        (grade < 38 || (5 - grade%5) >= 3) ? new_grades.push_back(grade) : new_grades.push_back(grade + (5 - grade%5));
    return new_grades;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> grades;
    int val;
    for (int i{}; i < n; i++) {
        std::cin >> val;
        grades.push_back(val);
    }
    std::vector<int> result = gradingStudents(grades);
    for (auto el: result) 
        std::cout << el << std::endl;

    return 0;
}
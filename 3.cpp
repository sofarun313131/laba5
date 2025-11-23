#include <iostream>
#include <vector>
#include <algorithm>
#include "header.h"

using namespace std;
size_t CountTwoness(const vector<Student>& students){
    size_t count = 0;
    for (const auto& s : students){
        for (unsigned r : s.Ratings){
            if (r == 2){
                count++;
                break;
            }
        }
    }
    return count;
}
int main(){
    vector<Student> students = {
            {"Pasha","A1", {5, 4, 5}, {"Math", "Eng", "PE"}},
            {"Masha", "B2", {5, 5, 2}, {"Bio", "Math", "Eng"}},
            {"Sasha", "A2", {4, 3, 3}, {"PE", "Hist", "Math"}},
            {"Anna", "C1", {4, 2, 5}, {"Eng", "Bio", "Hist"}}
    };
    cout<<CountTwoness(students);
    return 0;
}
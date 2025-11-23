#include <iostream>
#include <vector>
#include <algorithm>
#include "header.h"

using namespace std;
size_t CountExcellent(const vector<Student>& students){
    size_t count = 0;
    for (const auto& s : students){
        bool flag = true;
        for (unsigned r : s.Ratings){
            if (r != 5){
                flag = false;
                break;
            }
        }
        if (flag){
            count++;
        }
    }
    return count;
}
int main(){
    vector<Student> students = {
            {"Pasha","A1", {5, 5, 5}, {"Math", "Eng", "PE"}},
            {"Masha", "B2", {5, 5, 5}, {"Bio", "Math", "Eng"}},
            {"Sasha", "A2", {4, 3, 3}, {"PE", "Hist", "Math"}},
            {"Anna", "C1", {4, 2, 5}, {"Eng", "Bio", "Hist"}}
    };
    cout<<CountExcellent(students);
    return 0;
}
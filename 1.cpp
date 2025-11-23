#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "header.h"
using namespace std;

bool compare(const Student& a, const Student& b){
    return a.Name < b.Name;
}
void SortByName(vector<Student>& students){
    sort(students.begin(), students.end(), compare);
}
int main(){
    vector<Student> students = {
            {"Pasha","A1", {3, 4, 5}, {"Matan", "Angl", "Fizra"}},
            {"Masha", "B2", {4, 5, 5}, {"Bio", "Matan", "Angl"}},
            {"Sasha", "A2", {4, 3, 3}, {"Fizra", "Hist", "Matan"}},
            {"Anna", "C1", {4, 2, 5}, {"Angl", "Bio", "Hist"}}
    };
    SortByName(students);
    for (auto& s : students){
        cout<<s.Name<<endl;
    }
    return 0;
}
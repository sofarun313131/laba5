#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "header.h"

using namespace std;
vector<Student> VectorMathExcellent(const vector<Student>& students){
    vector<Student> rez;
    for (const auto& s : students){
        for (size_t i=0;i<s.Subjects.size();i++){
            if (s.Subjects[i] == "Math"){
                if (s.Ratings[i] == 5){
                    rez.push_back(s);
                }
                break;
            }
        }
    }
    return rez;
}
int main(){
    vector<Student> students = {
            {"Pasha","A1", {5, 5, 5}, {"Math", "Eng", "PE"}},
            {"Masha", "B2", {5, 5, 5}, {"Bio", "Math", "Eng"}},
            {"Sasha", "A2", {4, 3, 3}, {"PE", "Hist", "Math"}},
            {"Anna", "C1", {4, 2, 5}, {"Eng", "Bio", "Hist"}}
    };
    vector<Student> answer = VectorMathExcellent(students);
    for (const auto& s : answer){
        cout<<s.Name<<" ";
    }
    return 0;
}
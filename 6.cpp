#include <iostream>
#include <vector>
#include <string>
#include "header.h"

using namespace std;
vector<string> GroupsId(const vector<Student>& students){
    vector<string> rez;
    for (const auto& s : students){
        bool flag = true;
        for (const auto& n : rez){
            if (s.GroupId == n){
                flag = false;
                break;
            }
        }
        if (flag){
            rez.push_back(s.GroupId);
        }
    }
    return rez;
}
int main(){
    vector<Student> students = {
            {"Pasha","A1", {5, 4, 5}, {"Math", "Eng", "PE"}},
            {"Masha", "B2", {5, 5, 2}, {"Bio", "Math", "Eng"}},
            {"Sasha", "A1", {4, 3, 3}, {"PE", "Hist", "Math"}},
            {"Anna", "C1", {4, 2, 5}, {"Eng", "Bio", "Hist"}}
    };
    vector<string> answer = GroupsId(students);
    for (const auto& s : answer){
        cout<<s<<" ";
    }
    return 0;
}
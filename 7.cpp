#include <iostream>
#include <vector>
#include <string>
#include "header.h"

using namespace std;
vector<Group> Groups(const vector<Student>& students){
    vector<Group> rez;
    for (const auto& s : students){
        bool flag = true;
        for (auto& group : rez){
            if (group.Id == s.GroupId){
                group.Students.push_back(s);
                flag = false;
                break;
            }
        }
        if (flag){
            Group New;
            New.Id = s.GroupId;
            New.Students.push_back(s);
            rez.push_back(New);
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
    vector<Group> answer = Groups(students);
    for (const auto& g : answer){
        cout<<g.Id<<":"<<endl;
        for (const auto& s : g.Students){
            cout<<s.Name<<endl;
        }
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "header.h"

using namespace std;
float SrZn(const Student& x){
    int k=0;
    int s = size(x.Ratings);
    for (auto r : x.Ratings){
        k += r;
    }
    return float(k)/s;
}
void SortByRating(vector<Student>& students){
    sort(students.begin(), students.end(),
         [](const Student& a, const Student& b)
         {
            return SrZn(a) > SrZn(b);
         });
}
int main(){
    vector<Student> students = {
            {"Pasha","A1", {5, 4, 5}, {"Math", "Eng", "PE"}},
            {"Masha", "B2", {5, 5, 2}, {"Bio", "Math", "Eng"}},
            {"Sasha", "A2", {4, 3, 3}, {"PE", "Hist", "Math"}},
            {"Anna", "C1", {4, 2, 5}, {"Eng", "Bio", "Hist"}}
    };
    SortByRating(students);
    for (const auto& s: students){
        cout<<s.Name<<" "<<SrZn(s)<<endl;
    }
    return 0;
}
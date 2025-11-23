#pragma once
#include <string>
#include <vector>

struct Student
{
    std::string Name;
    std::string GroupId;
    std::vector<unsigned> Ratings;
    std::vector<std::string> Subjects;
};
struct Group
{
    std::string Id;
    std::vector<Student> Students;
};
std::vector<std::string> GroupsId(const std::vector<Student>&);
std::vector<Group> Groups(const std::vector<Student>&);
//
// Created by Anthony Stevens on 8/30/23.
//

#pragma once
#include <string>
#include "Degree.h"


class Student {
private:
    std::string studentId;
    std::string firstName;
    std::string lastName;
    std::string email;
    int age;
    int courseDays[3];
    DegreeProgram degreeProgram;

public:
    Student(const std::string &studentId, const std::string &firstName, const std::string &lastName,
            const std::string &email, int age, int daysInCourse1,int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);

    const std::string &getStudentId() const;

    void setStudentId(const std::string &studentId);

    const std::string &getFirstName() const;

    void setFirstName(const std::string &firstName);

    const std::string &getLastName() const;

    void setLastName(const std::string &lastName);

    const std::string &getEmail() const;

    void setEmail(const std::string &email);

    int getAge() const;

    void setAge(int age);

    const int getCourseDays(const int &day) const;
    void setCourseDays(const int &day, const int &course);

    DegreeProgram getDegreeProgram() const;

    void setDegreeProgram(DegreeProgram degreeProgram);

};




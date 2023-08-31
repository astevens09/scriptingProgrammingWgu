//
// Created by Anthony Stevens on 8/30/23.
//

#include "Student.h"
#include "Degree.h"
#include <string>


const std::string &Student::getStudentId() const {
    return studentId;
}

void Student::setStudentId(const std::string &studentId) {
    Student::studentId = studentId;
}

const std::string &Student::getFirstName() const {
    return firstName;
}

void Student::setFirstName(const std::string &firstName) {
    Student::firstName = firstName;
}

const std::string &Student::getLastName() const {
    return lastName;
}

void Student::setLastName(const std::string &lastName) {
    Student::lastName = lastName;
}

const std::string &Student::getEmail() const {
    return email;
}

void Student::setEmail(const std::string &email) {
    Student::email = email;
}

int Student::getAge() const {
    return age;
}

void Student::setAge(int age) {
    Student::age = age;
}

const int Student::getCourseDays(const int &day) const {
    return courseDays[day];
}

DegreeProgram Student::getDegreeProgram() const {
    return degreeProgram;
}

void Student::setCourseDays(const int &day, const int &course){
    courseDays[day] = course;
}

void Student::setDegreeProgram(DegreeProgram degreeProgram) {
    Student::degreeProgram = degreeProgram;
}

Student::Student(const std::string &studentId, const std::string &firstName, const std::string &lastName,
                 const std::string &email, int age, int daysInCourse1,int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) : studentId(
        studentId), firstName(firstName), lastName(lastName), email(email), age(age), degreeProgram(degreeProgram) {
    courseDays[0] = daysInCourse1;
    courseDays[1] = daysInCourse2;
    courseDays[2] = daysInCourse3;
}

#include <iostream>
#include "Degree.h"
#include "Student.h"

int main() {

    const std::string student[] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
                                   "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
                                   "A5,Anthony,stevens,ast1418@wgu.edu,32,30,40,50,SOFTWARE"};
    Student anthony = {"A5","Anthony","stevens","ast1418@wgu.edu",32,30,40,50,SOFTWARE};
    anthony.print();

}
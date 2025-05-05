#include<iostream>
#include<cstring>
using namespace std;

class Student{
    private:
        int rollNumber;
        char studentName[100];
    public:
        Student(int rollNumber=0, string studentName=""){
            this->rollNumber = rollNumber;
            strcpy(this->studentName, studentName.c_str());
        }
        void display(){
            cout << "Roll Number:  " << rollNumber << endl;
            cout << "Student Name: " << studentName << endl << endl;
        }
        int& getRollNumber(){
            return rollNumber;
        }
        char* getStudentName(){
            return studentName;
        }
};

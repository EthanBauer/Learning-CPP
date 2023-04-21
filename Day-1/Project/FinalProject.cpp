#include <iostream>
using namespace std;

class Student {
    private:
        double gpa;
        string hometown;

    public:
    string name;
    string major;
    Student(string aName, string aMajor, double aGpa, string aHometown){
        name = aName;
        major = aMajor;
        setGpa(aGpa);
        hometown = aHometown;
    }
    void setGpa(int aGpa){
        if(aGpa >= 0 && aGpa <= 4.0){
            gpa = aGpa;
        }
        else{
            gpa = 0;
        }
    }
    double getGpa(){
        return gpa;
    }

    void setHometown(int aHometown){
        hometown = aHometown;
    }
    string getHometown(){
        return hometown;
    }
    
};

int main(){
    
    string hometown;
    string name;
    string major;
    cout << "Enter student's name: " << endl;
    getline(cin, name);
    cout << "Enter student's major: " << endl;
    getline(cin, major);
    cout << "Enter student's gpa: " << endl;
    double gpa;
    cin >> gpa;
    cout << "Enter student's hometown: " << endl;
    getline(cin, hometown);

    Student stu1(name, major, gpa, hometown);
    cout << "Student's name: " << stu1.name << endl;
    cout << "Student's major: " << stu1.major << endl;
    cout << "Student's gpa: " << stu1.getGpa() << endl;
    cout << "Student's hometown: " << stu1.getHometown() << endl;
    return 0;
}
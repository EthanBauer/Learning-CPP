#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        string major;
        double gpa;
        Student(string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool hasHonors(){
            if(gpa >= 4.0){
                return true;
            }
            return false;
        }

};

int main(){

    Student stu1("Jim", "Business", 2.4);
    Student stu2("Pam", "Art", 4.0);

    cout << stu2.hasHonors() << endl;

    return 0;
}
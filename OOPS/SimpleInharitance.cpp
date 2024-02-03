/*
F1. how to read and print students information using
two classes and simple inheritance using C++ program?
*/

#include <iostream>
using namespace std;

// BASE CLASS
class profile {

private:
    char name[30];
    int age;
    char gender;

public:
    void setProfile(void);
    void displayProfile(void);

};

// FUNCTION DEFINITIONS
// setProfile function
void profile::setProfile(void)
{
    cout << "Enter student's basic details : " << endl;
    cout << "NAME : ";
    cin >> name; 
    cout << "AGE : ";
    cin >> age; 
    cout << "GENDER : ";
    cin >> gender;
}

// displayProfile function
void profile::displayProfile(void)
{
    cout << "NAME : " << name << ", AGE : " << age << ", GENDER : " << gender << endl;
}


// DERIVED CLASS
class result : public profile {
private:
    int totalMarks;
    float percentage;
    char grade;

public:
    void setResult(void);
    void displayResult(void);
};


// FUNCTION DEFINITIONS
void result::setResult(void)
{
    cout << "Enter student's result : " << endl;
    cout << "Total Marks : ";
    cin >> totalMarks;
    percentage = (float)((totalMarks * 100) / 500);
    cout << "Grade : ";
    cin >> grade;
}

void result::displayResult(void)
{
    cout << "Total Marks : " << totalMarks << ", Percentage : " << percentage <<"%"<< ", GRADE : " << grade << endl;
}


int main() {
    // Create an object of the derived class
    result r1;

    // Read student profile and result information
    r1.setProfile();
    r1.setResult();

    // Print student profile and result information
    r1.displayProfile();
    r1.displayResult();

    return 0;
}
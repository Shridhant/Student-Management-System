#include <iostream>
using namespace std;

class Student {
private:
  int rollNo;
  string name;
  int math;
  int science;
  int english;
  int history;
  float percentage;
  string result;

public:
  void input() {
    cout << "Enter Your Roll No.: ";
    cin >> rollNo;
    cout << "Enter Your Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Marks for Math: ";
    cin >> math;
    cout << "Enter Marks for Science: ";
    cin >> science;
    cout << "Enter Marks for English: ";
    cin >> english;
    cout << "Enter Marks for History: ";
    cin >> history;

    percentage = (math + science + english + history) / 4.0;

    if (percentage >= 40) {
      result = "Pass";
    } else {
      result = "Fail";
    }
    }
  
    void output() {
      cout << "Roll No.: " << rollNo << endl;
      cout << "Name: " << name << endl;
      cout << "Math: " << math << endl;
      cout << "Science: " << science << endl;
      cout << "English: " << english << endl;
      cout << "History: " << history << endl;
      cout << "Percentage: " << percentage << "%" << endl;
      cout << "Result: " << result << endl;
    }
  };
  
  int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;
  
    Student students[numStudents];
  
    for (int i = 0; i < numStudents; i++) {
      cout << "\nEnter details for student " << i + 1 << ":\n";
      students[i].input();
    }
  
    cout << "\nStudent details:\n";
    for (int i = 0; i < numStudents; i++) {
      cout << "-----------------------------------------\n";
      students[i].output();
      cout << "-----------------------------------------\n";
    }
  
    return 0;
  }
#include <iostream>
using namespace std;
void title() {
  cout << "\n\t -----------------------------------------\n";
  cout << "\n\t        Student Management System";
  cout << endl;
  cout << "\n\t -----------------------------------------\n";
}

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
    cout << "\n\t Enter Your Roll No.: ";
    cin >> rollNo;
    cout << "\n\t Enter Your Name: ";
    getline(cin, name);
    
    cout << "\n\t Enter Marks for Math: ";
    cin >> math;
    cout << "\n\t Enter Marks for Science: ";
    cin >> science;
    cout << "\n\t Enter Marks for English: ";
    cin >> english;
    cout << "\n\t Enter Marks for History: ";
    cin >> history;

    percentage = (math + science + english + history) / 4.0;

    if (percentage >= 40) {
      result = "Pass";
    } else {
      result = "Fail";
    }
  }

  void output() {
    cout << "\n\t Roll No.: " << rollNo << endl;
    cout << "\n\t Name: " << name << endl;
    cout << "\n\t Math: " << math << endl;
    cout << "\n\t Science: " << science << endl;
    cout << "\n\t English: " << english << endl;
    cout << "\n\t History: " << history << endl;
    cout << "\n\t Percentage: " << percentage << "%" << endl;
    cout << "\n\t Result: " << result << endl;
  }
};

int main() {
  title();
  int numStudents;
  cout << "\n\t Enter the number of students: ";
  cin >> numStudents;

  Student students[numStudents];

  for (int i = 0; i < numStudents; i++) {
    cout << "\n\t Enter details for student " << i + 1 << ":\n";
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
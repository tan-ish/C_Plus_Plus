#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Variables Declarations
string fname, lname, sub1, sub2, sub3, sub4, sub5;
int score1, score2, score3, score4, score5;
double total, percentage, gpa;
char grade;

int main()
{
  cout << "Please enter your first name :-" << endl;
  cin >> fname;
  cout << "Please enter your last name :-" << endl;
  cin >> lname;
  cout << "Thank you, " << fname <<endl;

  cout << "Enter the name of first course and the score (seperated by space) :- " << endl;
  cin >> sub1 >> score1;

  cout << "Enter the name of second course and the score (seperated by space) :- " << endl;
  cin >> sub2 >> score2;

  cout << "Enter the name of third course and the score (seperated by space) :- " << endl;
  cin >> sub3 >> score3;

  cout << "Enter the name of fourth course and the score (seperated by space) :- " << endl;
  cin >> sub4 >> score4;

  cout << "Enter the name of fifth course and the score (seperated by space) :- " << endl;
  cin >> sub5 >> score5;
  cout << endl;

  total = score1 + score2 + score3 + score4 + score5;
  percentage =  (total / 500) * 100;
  gpa = (total / 500) * 4;

  if (percentage <= 100 && percentage >= 90)
    grade = 'A';
  else if (percentage < 90 && percentage >= 80)
    grade = 'B';
  else if (percentage < 80 && percentage >= 70)
    grade = 'C';
  else if (percentage < 70 && percentage >= 60)
    grade = 'D';
  else
    grade = 'F';

  cout << fixed << showpoint << setprecision(2);

  cout << "\t\t Report Card of First Semester" << endl << endl;
  cout << "Student Name :- " << fname + " " + lname << endl;
  cout << "Major :- BSc. Computer Science" << endl;
  cout << endl;

  cout << setw(15) << left << "Courses"
       << setw(15) << left << "Full Marks"
       << setw(15) << right << "Marks Obtained";
  cout << endl;
  cout << endl;

  cout << setw(15) << left << sub1
       << setw(10) << left << "100"
       << setw(10) << right << score1 << endl;

  cout << setw(15) << left << sub2
       << setw(10) << left << "100"
       << setw(10) << right << score2 << endl;

  cout << setw(15) << left << sub3
       << setw(10) << left << "100"
       << setw(10) << right << score3 << endl;

  cout << setw(15) << left << sub4
       << setw(10) << left << "100"
       << setw(10) << right << score4 << endl;

  cout << setw(15) << left << sub5
       << setw(10) << left << "100"
       << setw(10) << right << score5 << endl;

  cout << setw(25) << right << "Percentage"
       << setw(15) << right << percentage
       << "%" << endl;

  cout << setw(25) << right << "Grade"
       << setw(15) << right << grade
       << endl;

  cout << setw(25) << right << "GPA"
       << setw(15) << right << gpa
       << endl;
  cout << endl;

  if (percentage >= 60)
    cout << "Congralutions, " << fname+ " " +lname << " for sucessfully passing the class with "
         << percentage << "%" << " and Grade " << grade << "." << endl << endl;
  else
  cout << "Sorry, " << fname+ " " +lname << " you have failed in one or more courses.\nYou got "
       << percentage << "%" << " and Grade " << grade << ". You have to work hard to pass the class." << endl << endl;

  return 0;
}

// Function Definations

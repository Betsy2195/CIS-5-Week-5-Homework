#include <iostream>

// Homework 5 — Betsy Caudel
// CIS 5 Week 05 · Rule engine lite

using std::cin;
using std::cout;
using std::endl;

int main() {
  int score = 0;
  int attendance = 0;

  // Asks user their score and attendance and stores their responces.
  cout << "What is your score (0-100)?" << endl;
  cin >> score;
  cout << "What is your attendance percentage?" << endl;
  cin >> attendance;

  // Edge values: 
  //Score - Just below:69; Exactly-on:70; Just above:71
  //Attendance - Just below:89; Exactly-on:90; Just-above:91
  bool pass = score >= 70;
  bool goodAttendance = attendance >= 90;
  // The invalid branch is placed first to make sure their score is within the range.
  //&& is used because they only pass if they have a good score and good attendance.
  // >= is used instead of > to include 90 (attendance) and 70(score) as enough attendance and a passing score.
  if (score < 0 || score > 100) {
    cout << "Invalid score.";
  } else if (pass && goodAttendance) {
    cout << "You passed!";
  } else if (pass && !goodAttendance) {
    cout << "Warn - Attendance too low.";
  } else if (!pass && goodAttendance) {
    cout << "Fail.";
  } else {
    cout << "Fail";
  }

  return 0;
}

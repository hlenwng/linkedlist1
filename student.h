#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <cstring>
using namespace std;

class Student{
 public:
  Student();
  Student(char* newName);

  char* getName();
 private:
  char* name;
};
#endif

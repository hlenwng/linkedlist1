#include "student.h"
#include <iostream>
#include <cstring>
using namespace std;

Student::Student(char* newName) {
  name = new char[20];
  strcpy (name, newName);
  //next = NULL;
}


char* Student::getName() {
  return name;
}

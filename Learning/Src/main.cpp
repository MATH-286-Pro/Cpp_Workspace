#include <iostream>
#include <bitset>
#include "main.h"
#include <array>
using namespace std;


struct student_data{
  int ID;
  string name;
};


int main(){
  Hello_World();

  int a = 0b00000011;
  int b = a << 4;

  int data1 = 0b11001100;
  int data2 = 0b10101010;

  int data = data1 << 8 | data2;  

  PRINT(data, "0b");
  PRINT(data1 & data2, "0b");
  PRINT(data1 | data2, "0b");

  // struct student_data student1;
  student_data student1;
  student1.ID = 1;
  student1.name = "John Doe";

return 0;

}
#include <iostream>
#include "main.h"
using namespace std;

int main(){
  Hello_World();

  int a = 0b00001;
  int b = a << 4;

  cout << a << endl;
  cout << b << endl;

  printf("a = %d\n",a);
  printf("b = %d\n",b);
}
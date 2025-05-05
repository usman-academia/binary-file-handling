#include<iostream>
#include<fstream>

#include"student.h"
#include"binary.h"

using namespace std;

const char* FILENAME = "data.bin";

int main(){
  Student obj1(1, "Muhammad Ali"), obj2(2, "Alex Martin");
  insertObject(FILENAME, obj1);
  insertObject(FILENAME, obj2);
  retrieveObject(FILENAME, 2);
}

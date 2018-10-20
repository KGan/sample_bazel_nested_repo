#include <fstream>
#include <iomanip>
#include <iostream>

#include "read_data.h"

Foo::Foo() {
  std::ifstream file;
  file.open("data.txt");
  char c;
  if (!file) {
    std::cout << "Unable to open file";
  } else {
    while (file >> c) {
      std::cout << c;
    }
  }
  file.close();
}

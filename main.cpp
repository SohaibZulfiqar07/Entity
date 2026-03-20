#include "entity.h"
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  const int entities = 3;
  entity e[entities]; //={
  //     entity("Steve","White", 34, 174, 63, 500, 1 ),
  //     entity("enderman","Black", 1000, 230, 75, 1000, 3),
  //     entity("villager","Brown", 45, 170, 70, 100, 0)
  // };
  ifstream fin("entity.txt");
  for (int i = 0; i < entities; i++) {
    e[i].getFromFile(fin);
  }
  fin.close();

  for (int i = 0; i < entities; i++) {
    e[i].display();
  }
  // for (int i = 0; i < entities; i++)
  // {
  //     e[i].writeToFile();
  // }
}
#ifndef ENTITY_H
#define ENTITY_H
#include <iostream>
using namespace std;

class entity{
  private:
  static int entityCount;
  string name;
  string color;
  int age;
  float height;
  float weight;
  int health;
  string *abilities;
  int aCount;

  public:
  entity();
  entity(string, string, int, float, float, int, const int,string[]);
  entity(const entity &obj);
  ~entity();

  entity& setName(string);
  entity& setColor(string);
  entity& setAge(int);
  entity& setHeight(float);
  entity& setWeight(float);
  entity& setHealth(int);
  entity& setAbilities(int, string[]);
  entity& setAbilityCount(int);
  
  string getName();
  string getColor();
  int getAge();
  float getHeight();
  float getWeight();
  int getHealth();
  string getAbilities();

  void getFromFile();

  static int totalEntites();
  
  void display();
};

#endif